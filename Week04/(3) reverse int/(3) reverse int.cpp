using namespace std;
#include <iostream>

int main()
{
	int number, reverseNumber = 0;
	
	cin >> number;

	do
	{
		reverseNumber = (reverseNumber * 10) + (number % 10);
		number /= 10;
	} while (number != 0);

	cout << reverseNumber;
}
