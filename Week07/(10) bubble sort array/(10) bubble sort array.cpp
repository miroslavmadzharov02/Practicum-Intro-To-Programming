using namespace std;
#include <iostream>

void enterArray(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}

void printArray(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}

void bubbleSort(int length, int arr[])
{
	int temp;

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int length, arr[100];

	cout << "Enter amount of numbers:" << endl;
	cin >> length;

	enterArray(length, arr);
	bubbleSort(length, arr);
	printArray(length, arr);
}

