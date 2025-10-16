#include <iostream>
#include <iomanip>  // untuk setw dan setprecision
#include <cmath>    // untuk sin dan cos

using namespace std;

int main() {
    cout << left << setw(10) << "X"
         << setw(15) << "Sinus(X)"
         << setw(15) << "Cosinus(X)" << endl;

    int i = 1;
    int x = -30;

    while (i <= 13) {   
        x += 30;

        double rad = x * M_PI / 180.0; 
        double s = sin(rad);
        double c = cos(rad);

        cout << left << setw(10) << x
             << setw(15) << fixed << setprecision(2) << s
             << setw(15) << fixed << setprecision(2) << c
             << endl;

        i++;
    }
}
