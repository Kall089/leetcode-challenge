#include <iostream>

using namespace std;

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void inputData(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void urutData(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                if (arr[i] != 0) {
                    tukar(arr[i], arr[j]);
                    cout << arr[i];
                }
                else if (arr[i] == 0)
                {
                    cout << arr[i];
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan banyak array";
    cin >> n;

    int arr[n];

    inputData(arr, n);
    cout << endl;
    urutData(arr, n);
}