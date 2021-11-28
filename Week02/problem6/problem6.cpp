using namespace std;
#include <iostream>

int main()
{
    char symbol;
    cin >> symbol;

	if (symbol >= 'a' && symbol<='z')
	{
		cout << symbol << " is a lowercase letter.";
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		cout << symbol << " is a uppercase letter.";
	}
	else if (symbol >= 48 && symbol <= 57)
	{
		cout << symbol << " is a digit.";
	}
	else
	{
		cout << symbol << " is a special symbol.";
	}
}

