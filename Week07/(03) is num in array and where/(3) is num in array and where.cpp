using namespace std;
#include <iostream>

void enterArray(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
		if (arr[i] < 0 || arr[i] > 5000)
		{
			cout << arr[i] << " is out of bounds.";
			return;
		}
	}
}

void printArr(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}

int countNumInArray(int length, int arr[], int numberToSeek)
{
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == numberToSeek)
		{
			count++;
		}
	}

	return count;
}

void printIndexNumInArray(int length, int arr[], int numberToSeek)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == numberToSeek)
		{
			cout << i << " ";
		}
	}
}

int main()
{
	int length, arr[100], numberToSeek;

	cout << "Enter amount of numbers:" << endl;
	cin >> length;

	enterArray(length, arr);

	cout << "Enter number to look for:" << endl;
	cin >> numberToSeek;

	cout << numberToSeek << " is found " << countNumInArray(length, arr, numberToSeek) << " times." << endl;
	if (countNumInArray(length, arr, numberToSeek) == 0)
	{
		cout << "Number is not found in the array.";
	}
	else
	{
		cout << "Number is found at positions:" << endl;
		printIndexNumInArray(length, arr, numberToSeek);
	}

	return 0;
}

