#include "matriks.h"
#include <iostream>
using namespace std;

Matriks::Matriks(int n) : n(n), data(n, vector<int>(n, 0)) {}

void Matriks::inputMatriks() {
    cout << "Masukkan elemen matriks (" << n << " x " << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data[i][j];
        }
    }
}

void Matriks::printMatriks() const {
    for (const auto& row : data) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

Matriks Matriks::multiplyRecursive(const Matriks& A, const Matriks& B) {
    Matriks C(A.n);
    multiplyHelper(A.data, B.data, C.data, 0, 0, 0, A.n);
    return C;
}

void Matriks::multiplyHelper(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int i, int j, int k, int n) {
    if (i >= n) return;

    if (j >= n) {
        multiplyHelper(A, B, C, i + 1, 0, 0, n);
        return;
    }

    if (k < n) {
        C[i][j] += A[i][k] * B[k][j];
        multiplyHelper(A, B, C, i, j, k + 1, n);
    } else {
        multiplyHelper(A, B, C, i, j + 1, 0, n);
    }
}
