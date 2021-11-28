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

void printReverseArray(int arrayLength, int arr[MAX_SIZE])
{
    int start = 0, end = arrayLength - 1, numCopy;

    while (start < end)
    {
        numCopy = arr[start];
        arr[start] = arr[end];
        arr[end] = numCopy;

        start++;
        end--;
    }

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arrayLength;
    int arr[MAX_SIZE];

    cin >> arrayLength;
    enterArray(arrayLength, arr);

    printReverseArray(arrayLength, arr);
}

