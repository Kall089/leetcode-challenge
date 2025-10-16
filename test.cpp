#include <iostream>
#include <string>
using namespace std;

typedef string nama[100];
typedef int nilai[100];

void inputData(nama &x, nilai &n, int batas) {
    for (int i = 0; i < batas; i++)
    {
        cout << "Masukkan nama: ";
        cin >> x[i];
        cout << "Masukkan nilai: ";
        cin >> n[i];
    }
}

void outputData(nama &x, nilai &n , int batas) {
    for (int i = 0; i < batas; i++)
    {
        cout << "Nama: " << x[i] << endl;
        cout << "Nilai: " << n[i] << endl;          
    }
}

void tukar1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void tukar2(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void urutkanData(nama &x, nilai &n, int batas) {

    for (int i = 0; i < batas; i++) {
        for (int j = i + 1; j < batas; j++) {
            if (n[i] > n[j]) {
                tukar1(n[i], n[j]);
                tukar2(x[i], x[j]);
            }
        }
    }

    outputData(x, n, batas);
}

int main() {
    nama x;
    nilai n;
    int batas;

    cout << "Masukkan jumlah Mahasiswa: ";
    cin >> batas;

    inputData(x, n, batas);
    cout << endl;

    cout << "Urutan data dari nilai yang terendah ke yang tertinggi: " << endl;
    urutkanData(x, n, batas);
}