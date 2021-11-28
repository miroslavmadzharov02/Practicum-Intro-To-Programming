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

int sumOfNumsAfterFirstPositive(int arrayLength, int arr[MAX_SIZE])
{
    int sum = 0;
    bool positiveNumExistInArray = false;

    for (int i = 0; i < arrayLength; i++)
    {
        if (positiveNumExistInArray)
        {
            sum += arr[i];
        }
        if (arr[i] > 0)
        {
            positiveNumExistInArray = true;
        }
    }

    return sum;
}

int main()
{
    int arrayLength;
    int arr[MAX_SIZE];

    cin >> arrayLength;
    enterArray(arrayLength, arr);

    if (sumOfNumsAfterFirstPositive(arrayLength, arr) != 0)
    {
        cout << "Sum of numbers after first positive is: " << sumOfNumsAfterFirstPositive(arrayLength, arr);
    }
    else
    {
        cout << "There are no positive numbers.";
    }
}