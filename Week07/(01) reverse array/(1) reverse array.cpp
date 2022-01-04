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

void printArray(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	} 
}

int* reversedArray(int length, int arr[])
{
	static int reversedArr[100];

	for (int i = 0; i < length; i++)
	{
		reversedArr[i] = arr[length - 1 - i];
	}

	return reversedArr;
}

int main()
{
	int length, arr[100], *reversedArr;

	cout << "Enter amount of numbers:" << endl;
	cin >> length;

	enterArray(length, arr);
	
	reversedArr = reversedArray(length, arr);
	printArray(length, reversedArr);

	return 0;
}

