#include <iostream>

void enterArray(int length, int arr[])
{
	std::cout << "Enter array values:\n";
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

int* getPointerOfNumInArray(int* arr, int numToSeek, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == numToSeek)
		{
			return &arr[i];
		}
	}

	return nullptr;
}

int main()
{
	int length, arr[100], numToSeek;

	std::cout << "Enter array size:\n";
	std::cin >> length;
	
	enterArray(length, arr);

	std::cout << "Enter number to search for:\n";
	std::cin >> numToSeek;

	std::cout << "Number found at " << getPointerOfNumInArray(arr, numToSeek, length);

	return 0;
}

