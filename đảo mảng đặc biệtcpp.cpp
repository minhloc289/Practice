#include <iostream>

using namespace std;

void inputArray(int a[], int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reverseArray(int a[], int n) {
    int left = 0;
    int right = n - 1;
    int x = a[(left + right) / 2];
    int i = left, j = right;
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
}
int main()
{
    int a[100], n;
    inputArray(a, n);

    // In mang ban dau
    printArray(a, n);

    //Dao mang
    reverseArray(a, n);

    // In mang sau khi dao
    cout << "Reversed array is" << endl;
    printArray(a, n);

    return 0;
}
