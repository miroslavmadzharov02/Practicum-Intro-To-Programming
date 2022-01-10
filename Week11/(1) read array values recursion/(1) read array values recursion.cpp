#include <iostream>

void enterArrayRecursively(int arr[], int length, int index)
{
    if (index == length) return;
    std::cin >> arr[index];
    enterArrayRecursively(arr, length, ++index);
}

void printArray(int arr[], int length)
{
    std::cout << "The entered array is:\n";
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int length, arr[100];

    std::cout << "Enter array length:\n";
    std::cin >> length;

    std::cout << "Enter array values:\n";
    enterArrayRecursively(arr, length, 0);
    printArray(arr, length);

    return 0;
}
