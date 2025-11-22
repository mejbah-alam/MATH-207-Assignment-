#include<iostream>
using namespace std;
int main()
{
    int m1, n1, m2, n2, row, col;
    cout << "Enter Rows Number for 1st Matrix: ";
    cin >> m1;
    cout << "Enter Columns Number for 1st Matrix: ";
    cin >> n1;
    cout << "Enter Rows Number for 2nd Matrix: ";
    cin >> m2;
    cout << "Enter Columns Number for 2nd Matrix: ";
    cin >> n2;
    int mat1[m1][n1], mat2[m2][n2], result[m1][n1];
    if ((m1 != m2) || (n1 != n2))
    {
        cout << endl << "Matrix Addition or Subtraction Not Possible!!!";
        return 0;
    }
    cout << endl << "Enter Elements for 1st Matrix: " << endl;
    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n1; col++)
        {
            cout << "mat1[" << row << "][" << col << "]: ";
            cin >> mat1[row][col];
        }
        cout << endl;
    }
    cout << "Enter Elements for 2nd Matrix: " << endl;
    for (row = 0; row < m2; row++)
    {
        for (col = 0; col < n2; col++)
        {
            cout << "mat2[" << row << "][" << col << "]: ";
            cin >> mat2[row][col];
        }
        cout << endl;
    }
    
    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n1; col++)
        {
            result[row][col] = mat1[row][col] + mat2[row][col];
        }
    }
    
    cout << endl << "Addition of 1st & 2nd Matrix:" << endl;
    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n1; col++)
        {
            cout << result[row][col] << "  ";
        }
        cout << endl;
    }
    
    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n1; col++)
        {
            result[row][col] = mat1[row][col] - mat2[row][col];
        }
    }
    
    cout << endl << "Subtraction of 1st & 2nd Matrix:" << endl;
    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n1; col++)
        {
            cout << result[row][col] << "  ";
        }
        cout << endl;
    }
    return 0;
}
