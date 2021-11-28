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

bool twoSubsequentZerosInArray(int arrayLength, int arr[MAX_SIZE])
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (arr[i] == 0 && arr[i + 1] == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arrayLength;
    int arr[MAX_SIZE];

    cin >> arrayLength;
    enterArray(arrayLength, arr);

    cout << boolalpha << twoSubsequentZerosInArray(arrayLength, arr);
}

