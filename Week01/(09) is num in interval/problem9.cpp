using namespace std;
#include <iostream>

int main()
{
	int number, intervalLeft, intervalRight;

	cout << "Enter number:";
	cin >> number;

	cout << "Enter left border:";
	cin >> intervalLeft;

	cout << "Enter right border:";
	cin >> intervalRight;

	cout << boolalpha << (number >= intervalLeft && number <= intervalRight);
}

