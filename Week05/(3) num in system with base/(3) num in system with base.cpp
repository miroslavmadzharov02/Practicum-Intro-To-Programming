using namespace std;
#include <iostream>

int returnNumericBase(int number, int base)
{
	int baseNum = 0;
	int position = 1;

	while (number > 0)
	{
		baseNum = (position * (number % base));
		position *= 10;
		number /= base;
	}

	return baseNum;
}

int main()
{
    int number, base;

    cin >> number;

	do
	{
		cin >> base;
	} while (base < 2 || base > 5);

	cout << returnNumericBase(number, base);
}

