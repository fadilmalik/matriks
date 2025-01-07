#ifndef MATRIKS_H
#define MATRIKS_H

#include <vector>
using namespace std;

class Matriks {
public:
    Matriks(int n);
    void inputMatriks();
    void printMatriks() const;
    static Matriks multiplyRecursive(const Matriks& A, const Matriks& B);

private:
    int n;
    vector<vector<int>> data;

    static void multiplyHelper(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int i, int j, int k, int n);
};

#endif // MATRIKS_H
