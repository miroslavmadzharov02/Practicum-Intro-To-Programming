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

void sumEveryRowMatrix(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum += matrix[i][j];
        }

        cout << "Sum for row " << i << " is " << sum << endl;
    }
}

void sumEveryColumnMatrix(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < columns; i++)
    {
        sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += matrix[j][i];
        }

        cout << "Sum for column " << i << " is " << sum << endl;
    }
}

int sumMainDiagonalMatrix(int matrix[][10], int rows, int columns)
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

int sumBelowMainDiagonalMatrix(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int sumAboveMainDiagonalMatrix(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < rows; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int sumSecondaryDiagonalMatrix(int matrix[][10], int rows, int columns)
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

int sumBelowSecondaryDiagonalMatrix(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows - 1; j > rows - 1 - i; j--)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int sumAboveSecondaryDiagonalMatrix(int matrix[][10], int rows, int columns)
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - 1 - i; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int main()
{
    int matrix[10][10], rows, columns, action;

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

    cout << "Enter a number for each action:" << endl;
    cout << "1 = sum of numbers in each row;" << endl;
    cout << "2 = sum of numbers in each column;" << endl;
    cout << "3 = sum of numbers in main diagonal;" << endl;
    cout << "4 = sum of numbers below main diagonal;" << endl;
    cout << "5 = sum of numbers above main diagonal;" << endl;
    cout << "6 = sum of numbers in secondary diagonal;" << endl;
    cout << "7 = sum of numbers below secondary diagonal;" << endl;
    cout << "8 = sum of numbers above secondary diagonal;" << endl;

    cin >> action;

    switch (action)
    {
    case 1:
        sumEveryRowMatrix(matrix, rows, columns);
        break;
    case 2:
        sumEveryColumnMatrix(matrix, rows, columns);
        break;
    case 3:
        cout << "Sum of the main diagonal is " << sumMainDiagonalMatrix(matrix, rows, columns);
        break;
    case 4:
        cout << "Sum of numbers below the main diagonal is " << sumBelowMainDiagonalMatrix(matrix, rows, columns);
        break;
    case 5:
        cout << "Sum of numbers above the main diagonal is " << sumAboveMainDiagonalMatrix(matrix, rows, columns);
        break;
    case 6:
        cout << "Sum of the secondary diagonal is " << sumSecondaryDiagonalMatrix(matrix, rows, columns);
        break;
    case 7:
        cout << "Sum of numbers below the secondary diagonal is " << sumBelowSecondaryDiagonalMatrix(matrix, rows, columns);
        break;
    case 8:
        cout << "Sum of numbers above the secondary diagonal is " << sumAboveSecondaryDiagonalMatrix(matrix, rows, columns);
        break;
    default:
        cout << "Invalid input.";
        break;
    }

    return 0;
}

