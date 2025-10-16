#include <iostream>
using namespace std;

long long pangkatRekursif(int a, int b) {
    if (b <= 1) {
        return a;
    } else {
        return a *= pangkatRekursif(a, (b - 1));
    }
}

long long deretBilangan(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + deretBilangan(n - 1);
    }
}

long long deretGanjil(int n) {
    if (n == 1) {
        return 1;
    } else {
        
    }
}


int main() {

    cout << pangkatRekursif(6, 2) << endl;
    cout << deretBilangan(5) << endl;
}