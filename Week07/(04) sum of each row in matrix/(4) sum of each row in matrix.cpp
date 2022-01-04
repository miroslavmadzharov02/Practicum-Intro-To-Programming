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

int returnSumOfRow(int matrix[][10], int row, int columns)
{
    int sum = 0;

    for (int i = 0; i < columns; i++)
    {
        sum += matrix[row][i];
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

    enterMatrix(matrix, rows, columns);

    for (int i = 0; i < rows; i++)
    {
        cout << "Sum of row " << i << " = " << returnSumOfRow(matrix, i, columns) << endl;
    }

    return 0;
}

