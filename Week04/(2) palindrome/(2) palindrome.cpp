using namespace std;
#include <iostream>

int main()
{
	int number, originalNumber, reverseNumber = 0;

	cin >> number;

	originalNumber = number;

	do
	{
		reverseNumber = (reverseNumber * 10) + (number % 10);
		number /= 10;
	} while (number != 0);

	if (originalNumber == reverseNumber)
	{
		cout << originalNumber << " is a palindrome.";
	}
	else
	{
		cout << originalNumber << " is not a palindrome.";
	}
}
