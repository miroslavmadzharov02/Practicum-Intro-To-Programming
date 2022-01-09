#include <iostream>

void enterArray(int length, int arr[])
{
	std::cout << "Enter array values:\n";
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

int findSumOfNumsArray(int length, int arr[])
{
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int* pointerAtLowerSumArray(int array1[], int array2[], int length1, int length2)
{
	if (findSumOfNumsArray(length1, array1) > findSumOfNumsArray(length2, array2))
	{
		return array1;
	}
	else
	{
		return array2;
	}
}

int main()
{
	int array1[100], array2[100], length1, length2;

	std::cout << "Enter first array length:\n";
	std::cin >> length1;
	enterArray(length1, array1);

	std::cout << "Enter second array length:\n";
	std::cin >> length2;
	enterArray(length2, array2);

	int *pointerAtLowerSum = pointerAtLowerSumArray(array1, array2, length1, length2);

	std::cout << pointerAtLowerSum;

    return 0;
}
