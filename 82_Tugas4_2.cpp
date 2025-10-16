#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j > n - i && j < n + i)
            {
                cout << j;
            } 
            else  
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
