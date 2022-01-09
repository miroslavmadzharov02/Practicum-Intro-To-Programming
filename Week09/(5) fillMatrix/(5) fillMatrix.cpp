#include <iostream>

void fillMatrix(int matrix[][100], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j < size - i - 1)
            {
                *(*(matrix + i) + j) = 0;
            }
            else if (j == size - i - 1)
            {
                *(*(matrix + i) + j) = 1;
            }
            else
            {
                *(*(matrix + i) + j) = 2;
            }
        }
    }
}

void printMatrix(int matrix[][100], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int matrix[100][100], size;

    std::cout << "Enter size of the matrix:\n";
    std::cin >> size;

    if (size < 1 || size > 1000)
    {
        std::cout << "Invalid size value.\n";
        return 0;
    }

    fillMatrix(matrix, size);
    printMatrix(matrix, size);

    return 0;
}
