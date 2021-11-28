using namespace std;
#include <iostream>

const int MAX_SIZE = 100;

void enterArray(int arrayLength, int arr[MAX_SIZE])
{
    for (int i = 0; i < arrayLength; i++)
    {
        cin >> arr[i];
    }
}

int getMaxNumInArrayIndex(int arrayLength, int arr[MAX_SIZE])
{
    int maxIndex = 0, maxNum = arr[0];

    for (int i = 1; i < arrayLength; i++)
    {
        if (maxNum < arr[i])
        {
            maxNum = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}

int getMinNumInArrayIndex(int arrayLength, int arr[MAX_SIZE])
{
    int minIndex = 0, minNum = arr[0];

    for (int i = 1; i < arrayLength; i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

void printSwappedArray(int arrayLength, int arr[MAX_SIZE])
{
    int maxNumIndex = getMaxNumInArrayIndex(arrayLength, arr);
    int minNumIndex = getMinNumInArrayIndex(arrayLength, arr);

    int result[MAX_SIZE];

    for (int i = 0; i < arrayLength; i++)
    {
        if (maxNumIndex == i)
        {
            result[minNumIndex] = arr[i];
        }
        else if (minNumIndex == i)
        {
            result[maxNumIndex] = arr[i];
        }
        else
        {
            result[i] = arr[i];
        }
    }

    for (int i = 0; i < arrayLength; i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int arrayLength;
    int arr[MAX_SIZE];

    cin >> arrayLength;
    enterArray(arrayLength, arr);

    printSwappedArray(arrayLength, arr);
}

