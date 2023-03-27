#include <iostream>
using namespace std;
void Nhap(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void sort(int a[], int l, int r) {
	int i = l, j = r;
	int x = a[(l + r) / 2];
	while (i <= j) {
		while (a[i] < x) {
			i++;
		}
		while (a[j] > x) {
			j--;
		}
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (l < j)
		sort(a, l, j);
	if (i < r)
		sort(a, i, r);
}
void EvenOddSort(int a[], int n) {
	int nb = 0, nc = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			nc++;
		}
		else {
			nb++;
		}
	}
	int* b = new int[nc];
	int* c = new int[nb];
	int j = 0, k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			c[j] = a[i];
			j++;
		}
		else {
			b[k] = a[i];
			k++;
		}
	}
	sort(b, 0, nb - 1);
	sort(c, 0, nc - 1);
	for (int i = 0; i < nb + nc; i++) {
		if (i < nc) {
			cout << c[i] << endl;
		}
		if (i >= nc) {
			cout << b[i - nc] << endl;
		}
	}
}
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	Nhap(a, n);
	EvenOddSort(a, n);
}
