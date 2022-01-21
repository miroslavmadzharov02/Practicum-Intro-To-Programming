#include <iostream>

void enterArray(const int& length, int* arr)
{
    std::cout << "Enter array values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

void printArray(const int& length, int* arr)
{
    std::cout << "The new array is:\n";
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void popFront(int*& arr, int& length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arrLength;

    std::cout << "Enter the array length:\n";
    std::cin >> arrLength;

    int* arr = new int[arrLength];

    enterArray(arrLength, arr);
    popFront(arr, arrLength);
    printArray(arrLength - 1, arr);

    delete[] arr;
    return 0;
}