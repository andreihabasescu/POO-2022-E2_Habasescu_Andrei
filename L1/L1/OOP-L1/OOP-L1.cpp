#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main() {
	char s[255];
	scanf("%[^\n]s", s);
	string arr[64];

	string str = s, aux;
	int k=0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			arr[k] = aux;
			k++;
			aux = "";
		}
		else {
			aux += str[i];
		}
	}
	if (aux != "") { arr[k] = aux; k++; }

	int max = arr[0].length();
	for (int i = 0; i < k; i++) {
		int position = -1;
		max = arr[i].length();
		for (int j = i; j < k; j++) {
			if (arr[j].length() > max) {
				position = j;
				max = arr[j].length();
			}
			else if (arr[j].length() == max) {
				if (arr[j] < arr[i]) {
					position = j;
				}
			}
			string temp = arr[i];
			if (position != -1) { 
				arr[i] = arr[position]; 
				arr[position] = temp;
			}

		}
	}

	for (int i = 0; i < k; i++) {
		printf("%s\n", arr[i].c_str());
	}

	return 0;
}