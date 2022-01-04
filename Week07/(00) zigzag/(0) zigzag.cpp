using namespace std;
#include <iostream>

void enterArray(int length, int arr[])
{
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}

bool isZigZag(int length, int arr[])
{
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			if (arr[i] < arr[i + 1])
			{
				count++;
			}
		}
		else if (i % 2 != 0)
		{
			if (arr[i] > arr[i + 1])
			{
				count++;
			}
		}
	}

	return count == length;
}

int main()
{
    int length, arr[100];

	cout << "Enter amount of numbers:" << endl;
	cin >> length;

	enterArray(length, arr);
	cout << boolalpha << isZigZag(length, arr);

	return 0;
}

