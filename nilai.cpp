#include <iostream>

using namespace std;

int main() {
    float x, n;
    cout << "Masukkan nilai X: ";
    cin >> x;

    cout << "Masukkan batas: ";
    cin >> n;

    float hasil_kuadrat = 0;
    float a = 1 / x;

    cout << "1/x = " << a << endl;

    for (int i = 2; i <= n; i++)
    {
        int kuadrat = 1;
        for (int j = 1; j <= i; j++) {
            kuadrat *= x;
        }
        hasil_kuadrat += kuadrat;
        cout << "x^" << i << " = " << kuadrat << endl;
    }

    a += hasil_kuadrat;


    cout << "total jika dijumlahkan : " << a << endl;
}