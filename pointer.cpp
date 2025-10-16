#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int *a = &x; 

    *a = 20;   
    cout << a;   
}
