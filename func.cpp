#include <iostream>

using namespace std;

void abc(int a, int b)
{
    a = 4;
    b = 2;
}

float kuadrat(int a, int b) {
    int hasil = 1;
    for (int i = 1; i <= b; i++)
    {
        hasil *= a;
    }
    
    return hasil;
}

int main() {

    int x = 5;
    int y = 7;

    cin >> x;
    cin >> y;

    abc(x, y);

    cout << x << " " << y << endl;
}