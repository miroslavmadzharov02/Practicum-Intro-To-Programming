using namespace std;
#include <iostream>

int main()
{
    int side, count = 1;

    cin >> side;

	for (int i = 0; i < side; i++) 
	{
		cout << "* ";
	}

	cout << endl;

	for (int i = 1; i <= side - 2; i++) 
	{
		
		for (int j = 0; j < i; j++) 
		{
			cout << "* ";
		}

		for (int i = 1; i <= side - 1 - count; i++) 
		{
			cout << "  ";
		}

		cout << "*";

		count++;
		cout << endl;
	}

	for (int i = 0; i < side; i++) 
	{
		cout << "* ";
	}
}

