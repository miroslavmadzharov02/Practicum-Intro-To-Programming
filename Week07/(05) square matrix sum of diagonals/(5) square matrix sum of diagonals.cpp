using namespace std;
#include <iostream>

void enterMatrix(int matrix[][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int leftMatrixDiagonalSum(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int rightMatrixDiagonalSum(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (j == rows - 1 - i)
            {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    int matrix[10][10], rows, columns;

    cout << "Enter rows:" << endl;
    cin >> rows;

    cout << "Enter columns:" << endl;
    cin >> columns;

    if (rows != columns)
    {
        cout << "Matrix is not square.";
        return 0;
    }

    enterMatrix(matrix, rows, columns);

    cout << "Sum of the diagonals is = " 
            << leftMatrixDiagonalSum(matrix, rows, columns) + rightMatrixDiagonalSum(matrix, rows, columns);

    return 0;
}

