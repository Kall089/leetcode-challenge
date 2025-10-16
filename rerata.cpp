#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    double arr[n];
    double total = 0;


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    total /= n;

    cout << "Rerata: " << total;

    cout << endl;
    cout << "Daftar bilangan di atas rerata: " << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] > total) {
            cout << arr[i] << endl;
        }
    }

}