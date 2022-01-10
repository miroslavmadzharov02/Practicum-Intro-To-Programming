#include <iostream>

void enterArray(int length, int arr[])
{
    std::cout << "Enter array values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

int smallestNumInArrayRecursively(int length, int *arr, int minNum)
{
    if (length == 0) return minNum;
    if (minNum > *arr) minNum = *arr;
    smallestNumInArrayRecursively(--length, ++arr, minNum);
}

int main()
{
    int length, arr[100];

    std::cout << "Enter array length:\n";
    std::cin >> length;

    enterArray(length, arr);

    std::cout << "The smallest number in this array is " << smallestNumInArrayRecursively(length, arr, arr[0]);

    return 0;
}
