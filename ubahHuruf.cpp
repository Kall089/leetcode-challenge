#include <iostream>

using namespace std;

void inputHuruf(string &huruf) {
    cout << "Masukkan huruf: ";
    cin >> huruf;
}

void hurufToChar(string huruf) {

    string hurufChar[10];

    for (int i = 0; i < huruf.length(); i++) {
        hurufChar[i] = huruf[i];
    }

    hurufChar[1] = 'u';

    for (int i = 0; i < huruf.length(); i++) {
        cout << hurufChar[i];
    }

    cout << endl;
}

int main() {
    int array[20] = {5, 6, 7, 8, 9};

    int index = sizeof(array) / sizeof(array[1]);

    cout << size
}