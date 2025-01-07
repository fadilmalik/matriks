#include <iostream>
#include "matriks.h"
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran matriks (n x n): ";
    cin >> n;

    Matriks A(n), B(n);

    cout << "Input Matriks A:\n";
    A.inputMatriks();

    cout << "Input Matriks B:\n";
    B.inputMatriks();

    Matriks C = Matriks::multiplyRecursive(A, B);

    cout << "Hasil Perkalian Matriks:\n";
    C.printMatriks();

    return 0;
}
