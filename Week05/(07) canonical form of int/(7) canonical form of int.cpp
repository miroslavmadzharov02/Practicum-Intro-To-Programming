using namespace std;
#include <iostream>

int numberLength(int number)
{
    int count = 0;

	while (number != 0)
	{
		number /= 10;
		count++;
	}

	return count;
}

int pow(int base, int power)
{
	if (power == 0)
	{
		return 1;
	}
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= base;
	}

	return result;
}

void canonicalNumber(int number)
{
	int numberLen = numberLength(number);

	for (int i = 0; i < numberLen; i++)
	{
		if (i == numberLen - 1)
		{
			cout << number % 10 << "*" << pow(10, i);
			continue;
		}
		cout << number % 10 << "*" << pow(10, i) << " + ";
		number /= 10;
	}
}

int main()
{
	int number;

	cin >> number;

	canonicalNumber(number);
}

