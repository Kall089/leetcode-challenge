#include <iostream>
#include <vector>
using namespace std;

// Fungsi menghitung nilai kombinasi (nCk) tanpa faktorial
long long int combinationValue(long long int n, long long int k) {
    if (k > n - k) k = n - k; // ambil sisi kecil
    long long int result = 1;
    for (int i = 1; i <= k; i++) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

// Fungsi rekursif untuk menampilkan semua kombinasi
void generateCombinations(int n, int k, int start, vector<int>& current) {
    if (current.size() == k) {
        cout << "[ ";
        for (int num : current) cout << num << " ";
        cout << "]" << endl;
        return;
    }

    for (int i = start; i <= n; i++) {
        current.push_back(i);
        generateCombinations(n, k, i + 1, current);
        current.pop_back();
    }
}

int main() {
    long long int n, k;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai k: ";
    cin >> k;

    cout << "Daftar kombinasi:\n";

    vector<int> current;


    cout << "\nNilai kombinasi " << n << "C" << k << " = " << combinationValue(n, k) << endl;
    return 0;
}
