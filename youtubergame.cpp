#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "pindah: ";
    cin >> n;

    int x = sizeof(arr) / sizeof(arr[0]);

    cout << "[";
    for (int i = x - n; i < x; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < x - n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
}
