using namespace std;
#include <iostream>

int main()
{
    int number, binary = 0, digitPos = 1;
    cin >> number;

	if (number > 0 && number <= 1000)
	{
		while (number > 0)
		{
			binary += digitPos * (number % 2);
			digitPos *= 10;
			number /= 2;
		}
		cout << binary;
	}
	else
	{
		cout << "out of bounds";
	}
}

