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

void printMatrixPlusTen(int matrix[][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] + 10 << " ";
        }

        cout << endl;
    }
}

int main()
{
    int matrix[10][10], rows, columns;

    cout << "Enter rows:" << endl;
    cin >> rows;

    cout << "Enter columns:" << endl;
    cin >> columns;

    enterMatrix(matrix, rows, columns);

    printMatrixPlusTen(matrix, rows, columns);

    return 0;
}

