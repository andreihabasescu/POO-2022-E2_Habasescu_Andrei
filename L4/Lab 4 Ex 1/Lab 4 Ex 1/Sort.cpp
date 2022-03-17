#include <ctime>
#include <stdlib.h>
#include<stdarg.h>
#include "Sort.h"
void Sort::InsertSort(bool ascendent) {
	
	for (int i = 1; i < Sort::n; i++) {
		int position = -1;
		int key = Sort::arr[i];
		for (int k = i-1; k >= 0; k--) {
			if (Sort::arr[k] > key) {
				position = k;
			}
		}
		if (position != -1) {
			for (int j = i - 1; j >= position; j--) {
				Sort::arr[j + 1] = Sort::arr[j];
			}
			Sort::arr[position] = key;
			
		}
	}

	if (!ascendent) {
		for (int i = 0; i < Sort::n / 2; i++) {
			int aux = Sort::arr[i];
			Sort::arr[i] = Sort::arr[n-1 - i];
			Sort::arr[n-1 - i] = aux;
		}
	}
};

void Swap(int* a, int* b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}

int Partition(int* arr, int& low, int& high) {
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high; j++) {
		if (arr[j] < pivot) {
			i++;
			Swap(&arr[i], &arr[j]);
		}
	}
	Swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void QSort(int * arr,int low, int high) {
	if (low < high) {
		int pivot = Partition(arr, low, high);

		QSort(arr, low, pivot - 1);
		QSort(arr, pivot + 1, high);
	}
}

void Sort::QuickSort(bool ascendent) {
	int* aux = new int[n];
	for (int i = 0; i < n; i++) {
		aux[i] = arr[i];
	}
	QSort(aux, 0, n - 1);

	for (int i = 0; i < n; i++) {
		arr[i] = aux[i];
	}

	if (!ascendent) {
		for (int i = 0; i < Sort::n / 2; i++) {
			int aux = Sort::arr[i];
			Sort::arr[i] = Sort::arr[n - 1 - i];
			Sort::arr[n - 1 - i] = aux;
		}
	}
};


void Sort::BubbleSort(bool ascendent) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}

	if (!ascendent) {
		for (int i = 0; i < Sort::n / 2; i++) {
			int aux = Sort::arr[i];
			Sort::arr[i] = Sort::arr[n - 1 - i];
			Sort::arr[n - 1 - i] = aux;
		}
	}
};

void Sort::Print() {
	cout << Sort::n << " elements : ";
	for (int i = 0; i < Sort::n; i++) {
		cout  << Sort::arr[i] << " ";
	}
	cout<<endl;
};

int  Sort::GetElementsCount() {
	return n;
};

int  Sort::GetElementFromIndex(int index) {
	return arr[index];
};

Sort::Sort(int elemNumber, int min, int max) {
	n = elemNumber;
	//default_random_engine random;
	arr = new int[elemNumber];
	srand(time(NULL));
	for (int i = 0; i < elemNumber; i++) {
		int x = rand() % (max - min + 1) + min;
		arr[i] = x;
	}
}; //1

Sort::Sort(int a, int b, int c, int d){
	n = 4;
	arr = new int[n];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
}; //2

Sort::Sort(int* a, int inputN) {
	arr = a;
	n = inputN;
}; //3

Sort::Sort(int count, ...) {
	arr = new int[count];
	n = count;
	va_list ap;
	va_start(ap,count);

	for (int i = 0; i < count; i++) {
		arr[i] = va_arg(ap, int);
	}
	va_end(ap);
}; //4


Sort::Sort(string input) {
	int counter = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ',') { counter++; };

	}
	arr = new int[counter];
	int value = 0, k = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			value = value * 10 + input[i] - 48;
		}
		else if (input[i]==',') {
			Sort::arr[k] = value;
			k++;
			value = 0;
		}
	}
	arr[k] = value;
	k++;
	Sort::n = k;
}; //5