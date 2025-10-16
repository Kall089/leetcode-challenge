#include <iostream>

using namespace std;

int main() {
    int x = 121;
    int hasil = 0;
    while (x > 0)
    {
        int n = (x % 10);
        hasil += n;
        hasil *= 10;

        x /= 10;
    }

    hasil /= 10;

    cout << hasil;
}