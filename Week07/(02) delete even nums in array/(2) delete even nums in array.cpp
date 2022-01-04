using namespace std;
#include <iostream>

void enterArray(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
		if (arr[i] < 10 || arr[i] > 99)
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

void printOddOnlyArray(int length, int arr[])
{
	int oddOnlyArray[100], count = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2 != 0)
		{
			oddOnlyArray[count] = arr[i];
			count++;
		}
	}

	printArr(count, oddOnlyArray);
}

int main()
{
	int length, arr[100];

	cout << "Enter amount of numbers (between 5 and 25):" << endl;
	cin >> length;
	if (length < 5 || length > 25)
	{
		cout << length << " is out of bounds.";
		return 0;
	}

	enterArray(length, arr);

	printOddOnlyArray(length, arr);

	return 0;
}

