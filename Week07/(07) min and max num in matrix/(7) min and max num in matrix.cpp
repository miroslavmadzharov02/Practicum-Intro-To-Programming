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

int MinNumMatrix(int matrix[][10], int rows, int columns)
{
    int minNum = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] < minNum)
            {
                minNum = matrix[i][j];
            }
        }
    }

    return minNum;
}

int MaxNumMatrix(int matrix[][10], int rows, int columns)
{
    int maxNum = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] > maxNum)
            {
                maxNum = matrix[i][j];
            }
        }
    }

    return maxNum;
}

int main()
{
    int matrix[10][10], rows, columns;

    cout << "Enter rows:" << endl;
    cin >> rows;

    cout << "Enter columns:" << endl;
    cin >> columns;

    enterMatrix(matrix, rows, columns);

    cout << "The smallest number in this matrix is = " << MinNumMatrix(matrix, rows, columns) << endl;
    cout << "The biggest number in this matrix is = " << MaxNumMatrix(matrix, rows, columns);

    return 0;
}

