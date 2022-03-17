#include <iostream>
#include "Canvas.h"
using namespace std;

Canvas::Canvas(int width, int height) {
	Canvas::yHeight = height;
	Canvas::xLength = width;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			Canvas::Canv[y][x] = '*';
		}
	}
};

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
};

void Canvas::FillCircle(int x, int y, int ray, char ch) {
};

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
};

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
};

void Canvas::SetPoint(int x, int y, char ch) {
};

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {

};

void calcCoords(int x1, int y1, int x2, int y2) {
	int a = (y1 - y2);
	int b = (x2 - x1);
	int c = (x1 - x2) * y1 + (y2 - y1) * x1;
}

void Canvas::Print() {
	for (int y = 0; y < Canvas::yHeight; y++) {
		cout << endl;
		for (int x = 0; x < Canvas::xLength; x++) {
			cout << Canvas::Canv[y][x];
		}
	}
}; // shows what was printed

void Canvas::Clear() {
	for (int y = 0; y < Canvas::yHeight; y++) {
		for (int x = 0; x < Canvas::xLength; x++) {
			Canvas::Canv[y][x]='*';
		}
	}
}; // clears the canvas