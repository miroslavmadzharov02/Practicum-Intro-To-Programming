#include <iostream>

void enterArray(int length, int arr[])
{
    std::cout << "Enter second row values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

bool doTheTwoRowsHaveEqualNumbers(int length, int firstRow[], int secondRow[])
{
    int count = 0, firstRowLength = 5;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < firstRowLength; j++)
        {
            if (firstRow[j] == secondRow[i])
            {
                count++;
            }
        }
    }

    return count >= firstRowLength;
}

int main()
{
    int firstRow[] = { 11,72,13,14,15 };
    int secondRow[100], length;

    std::cout << "Enter amount of numbers:\n";
    std::cin >> length;

    enterArray(length, secondRow);

    if (doTheTwoRowsHaveEqualNumbers(length, firstRow, secondRow))
    {
        std::cout << "The numbers in the first row are also in the second row.\n";
    }
    else
    {
        std::cout << "The numbers in the first row are not in the second row.\n";
    }

    return 0;
}
