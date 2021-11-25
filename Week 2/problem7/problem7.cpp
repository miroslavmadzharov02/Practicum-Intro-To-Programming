using namespace std;
#include <iostream>

int main()
{
	int fourDigitNumber;
	cin >> fourDigitNumber;

	int firstDigit = fourDigitNumber / 1000;
	int secondDigit = (fourDigitNumber / 100) % 10;
	int thirdDigit = (fourDigitNumber / 10) % 10;
	int fourthDigit = fourDigitNumber % 10;

	if (firstDigit % 2 != 0)
	{
		cout << "The first digit is odd." << endl;
	}

	if (firstDigit > secondDigit 
		&& firstDigit > thirdDigit 
		&& firstDigit > fourthDigit)
	{
		cout << "The first digit is biggest.";
	}
	else
	{
		cout << "The first digit is not the biggest";
	}
}

