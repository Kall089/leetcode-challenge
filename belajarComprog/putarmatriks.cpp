#include <iostream>

using namespace std;

typedef int Matriks[100][100];


void inputData(Matriks &putar, int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> putar[i][j];
        }
    }

}

void putarMatriks(Matriks &putar, int N, int M) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << putar[M - j][i] << " ";
        }
        cout << endl;
    }

}

int main() {
    Matriks putar;
    int N;
    int M;
    cin >> N;
    cin >> M;

    

    inputData(putar, N, M);
    putarMatriks(putar, N, M);
}