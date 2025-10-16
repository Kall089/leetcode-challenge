#include <iostream>

using namespace std;

int balik(int n) {

    int membalik = 0;
    while (n > 0)
    {
        membalik += (n % 10);
        membalik *= 10;
        n /= 10;
    }
    membalik /= 10;
    return membalik;
}

int main() {
    int a, b;
    cin >> a >> b;

    int x = balik(a);
    int y = balik(b);

    cout << balik(x + y);
    cout << endl;
}