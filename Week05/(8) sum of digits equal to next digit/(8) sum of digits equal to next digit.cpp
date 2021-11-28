using namespace std;
#include <iostream>

bool sumOfDigitsEqualsNextCheck(int number)
{

	int digitOne = number % 10;
	number /= 10;

	int digitTwo = number % 10;
	number /= 10;

	while (number > 0)
	{
		if (digitOne + digitTwo != number % 10)
		{
			return false;
		}

		digitOne = digitTwo;
		digitTwo = number % 10;
		number /= 10;
	}

	return true;
}

int main()
{
    int number;

    cin >> number;

	cout << boolalpha << sumOfDigitsEqualsNextCheck(number);
}

