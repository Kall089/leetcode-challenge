#include <iostream>
#include <vector>

using namespace std;

int pangkat(int X, int n) {

    int total = 1;
    for (int i = 1; i <= n; i++)
    {
        total *= X;
    }
    return total;
}

int main() {

    int a, b;
    
    cout << "Masukkan nilai X : ";
    cin >> a;

    cout << "Masukkan nilai n : ";
    cin >> b;

    int hasil = pangkat(a, b);
    cout << hasil << endl; 
}