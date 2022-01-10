#include <iostream>

void enterArray(int length, int arr[])
{
    std::cout << "Enter array values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

void printArrayRecursively(int arr[], int length, int index)
{
    if (index == length) return;
    std::cout << arr[index] << " ";
    printArrayRecursively(arr, length, ++index);
}

int main()
{
    int length, arr[100];

    std::cout << "Enter array length:\n";
    std::cin >> length;

    enterArray(length, arr);

    std::cout << "The entered array is:\n";
    printArrayRecursively(arr, length, 0);

    return 0;
}
