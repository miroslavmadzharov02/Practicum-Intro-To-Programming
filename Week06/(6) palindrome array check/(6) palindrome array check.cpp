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

void makeNewReverseArray(int arrayLength, int arr[MAX_SIZE], int reverseArr[MAX_SIZE])
{
    for (int i = 0, j = arrayLength - 1; i < arrayLength; i++ , j--)
    {
        reverseArr[i] = arr[j];
    }
}

bool isArrayPalindrome(int arrayLength, int arr[MAX_SIZE], int reverseArr[MAX_SIZE])
{
    int count = 0;

    makeNewReverseArray(arrayLength, arr, reverseArr);

    for (int i = 0; i < arrayLength - 1; i++)
    {
        if (arr[i] == reverseArr[i])
        {
            count++;
        }
    }

    return count == arrayLength - 1;
}

int main()
{
    int arrayLength;
    int arr[MAX_SIZE] , reverseArr[MAX_SIZE];

    cin >> arrayLength;
    enterArray(arrayLength, arr);

    cout << boolalpha << isArrayPalindrome(arrayLength, arr, reverseArr);
}

