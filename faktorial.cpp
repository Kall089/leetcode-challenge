#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Array(vector<int> array) {
    vector<int> ganjil;


    for (int x : array) {
        if (x % 2 == 1) {
            ganjil.push_back(x);
        }
    }

    sort(ganjil.begin(), ganjil.end());


    int idx = 0;
    vector<int> hasil;
    for (int x : array) {
        if (x % 2 == 1) {
            hasil.push_back(ganjil[idx]);
            idx++;
        } else {
            hasil.push_back(x);
        }
    }

    return hasil;
}

int main() {
    vector<int> test = Array({3, 5, 6, 8, 3, 6});

    for (int x : test) {
        cout << x << " ";
    }
    cout << endl;
}
