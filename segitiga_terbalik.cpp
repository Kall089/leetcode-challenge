#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++) {
            if (i == j) {
                cout << "*";
            } else if (5 - i + 1 == j) {
                cout << "*";
            } else {
                cout << " ";
            }
            
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 1; i <= 18; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 1; i <= 8; i++)
    {
        cout << "*";
        for (int j = 1; j <= 8 * 2; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    for (int i = 1; i <= 18; i++) {
        cout << "*";
    }
    cout << endl;
    
}