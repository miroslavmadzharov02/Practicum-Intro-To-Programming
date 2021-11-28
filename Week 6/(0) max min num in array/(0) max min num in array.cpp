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

int main()
{
    int arrayLength;
    int arr[MAX_SIZE];

    cin >> arrayLength;
    enterArray(arrayLength, arr);

    cout << "Biggest number in the array is " << arr[getMaxNumInArrayIndex(arrayLength, arr)] 
            << " with index " << getMaxNumInArrayIndex(arrayLength, arr) << endl;

    cout << "Smallest number in the array is " << arr[getMinNumInArrayIndex(arrayLength, arr)]
            << " with index " << getMinNumInArrayIndex(arrayLength, arr) << endl;
}

