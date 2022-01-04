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

bool isNumInMatrix(int matrix[][10], int rows, int columns, int numberToSeek)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (numberToSeek == matrix[i][j])
            {
                return true;
            }
        }
    }

    return false;
}

void printIndexOfNumInMatrix(int matrix[][10], int rows, int columns, int numberToSeek)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (numberToSeek == matrix[i][j])
            {
                cout << "row = " << i << " column = " << j << endl;
            }
        }
    }
    
}

int main()
{
    int matrix[10][10], rows, columns, numberToSeek;

    cout << "Enter rows:" << endl;
    cin >> rows;

    cout << "Enter columns:" << endl;
    cin >> columns;

    enterMatrix(matrix, rows, columns);

    cout << "Enter number to look for:" << endl;
    cin >> numberToSeek;

    if (isNumInMatrix(matrix, rows, columns, numberToSeek))
    {
        cout << "The number is found in the matrix." << endl;
        cout << "It is at positions:" << endl;
        printIndexOfNumInMatrix(matrix, rows, columns, numberToSeek);
    }
    else
    {
        cout << "The number is not found in the matrix.";
    }

    return 0;
}

