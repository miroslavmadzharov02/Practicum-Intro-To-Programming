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

void doubleArrayCapacity(int*& arr, int& capacity)
{
    int* copyArr = new int[capacity];

    for (int i = 0; i < capacity; i++)
    {
        copyArr[i] = arr[i];
    }

    delete[] arr;
    arr = nullptr;
    arr = new int[capacity * 2];

    for (int i = 0; i < capacity; i++)
    {
        arr[i] = copyArr[i];
    }

    delete[] copyArr;
    capacity *= 2;
}

void pushFront(int*& arr, int& arrayCapacity, int& arrayLength, int numToAdd)
{
    if (arrayCapacity == arrayLength) doubleArrayCapacity(arr, arrayCapacity);

    for (int i = arrayLength + 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = numToAdd;
    ++arrayLength;
}

int main()
{
    int arrLength, arrCapacity;

    std::cout << "Enter array capacity:\n";
    std::cin >> arrCapacity;

    int* arr = new int[arrCapacity];

    std::cout << "Enter the array length:\n";
    std::cin >> arrLength;

    enterArray(arrLength, arr);

    std::cout << "What number to add to the array:\n";
    int numToAdd;
    std::cin >> numToAdd;

    pushFront(arr, arrCapacity, arrLength, numToAdd);

    printArray(arrLength, arr);

    delete[] arr;
    return 0;
}