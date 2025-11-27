#include<iostream>
using namespace std;
int main()
{
    int row, col, n, isSymmetric = 1;
    cout << "Enter Size of Square Matrix: ";
    cin >> n;
    int mat[n][n];
    cout << endl << "Enter Elements of Matrix A:" << endl;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> mat[row][col];
        }
        cout << endl;
    }
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row > col)
            {
                if (mat[row][col] != mat[col][row])
                {
                    isSymmetric = 0;
                    break;
                }
            }
        }
    }
    if (isSymmetric) {
        cout << "The Matrix is Symmetric";
    }
    else {
        cout << "The Matrix is Not Symmetric";
    }
    return 0;
}
