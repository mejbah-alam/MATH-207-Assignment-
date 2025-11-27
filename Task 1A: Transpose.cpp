#include<iostream>
using namespace std;
int main()
{
    int row, col, m, n;
    cout << "Enter Rows Number of Matrix: ";
    cin >> m;
    cout << "Enter Column Number of Matrix: ";
    cin >> n;
    int mat1[m][n], mat2[n][m];
    cout << endl << "Enter Elements of Matrix A:" << endl;
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> mat1[row][col];
        } cout << endl;
    }
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            mat2[col][row] = mat1[row][col];
        }
    }
    cout << endl << "Transpose Matrix of A is B." << endl << "B: ";
    for (row = 0; row < n; row++)
    {
        cout << "\t";
        for (col = 0; col < m; col++)
        {
            cout << mat2[row][col] << "  ";
        } cout << endl;
    }
    return 0;
}
