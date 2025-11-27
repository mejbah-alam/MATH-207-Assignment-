#include<iostream>
using namespace std;
int main()
{
    int row, col, m;
    cout << "Enter Size of Square Matrix: ";
    cin >> m;
    int mat[m][m];
    cout << endl << "Enter Elements of Matrix A:" << endl;
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < m; col++)
        {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> mat[row][col];
        } cout << endl;
    }
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < m; col++)
        {
            if (row > col) {
                swap(mat[row][col], mat[col][row]);
            }
        }
    }
    cout << endl << "Transpose Matrix of A is B." << endl << "B: ";
    for (row = 0; row < m; row++)
    {
        cout << "\t";
        for (col = 0; col < m; col++)
        {
            cout << mat[row][col] << "  ";
        } cout << endl;
    }
    return 0;
}
