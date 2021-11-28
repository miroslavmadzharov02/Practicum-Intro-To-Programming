using namespace std;
#include <iostream>

int main()
{
    int amountOfRepeats, amountOfOnes;

    cin >> amountOfRepeats;

	for (amountOfOnes = 0; amountOfOnes < amountOfRepeats; amountOfOnes++)
	{
		for (int i = 0; i <= amountOfOnes; i++)
		{
			cout << 1;
		}

		if (amountOfOnes != amountOfRepeats - 1)
		{
			cout << " + ";
		}
	}
}
