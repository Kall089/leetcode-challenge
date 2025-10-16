#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main() {
    int k = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 ; j++) {
            if (k % 5 == i) {
                cout << k << " ";
            }
            k++;
        }
    }
    if (k % 5 == 0) {
        cout << k << " " << endl;
    }

    
}
