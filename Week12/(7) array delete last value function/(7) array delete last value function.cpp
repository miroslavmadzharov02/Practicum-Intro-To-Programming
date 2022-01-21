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

void popBack(int*& arr, int& length)
{
    int* copyArr = new int[length];

    for (int i = 0; i < length; i++)
    {
        copyArr[i] = arr[i];
    }

    delete[] arr;
    arr = nullptr;
    arr = new int[length - 1];

    for (int i = 0; i < length - 1; i++)
    {
        arr[i] = copyArr[i];
    }

    delete[] copyArr;
}

int main()
{
    int arrLength;

    std::cout << "Enter the array length:\n";
    std::cin >> arrLength;

    int* arr = new int[arrLength];

    enterArray(arrLength, arr);
    popBack(arr, arrLength);
    printArray(arrLength - 1, arr);

    delete[] arr;
    return 0;
}
