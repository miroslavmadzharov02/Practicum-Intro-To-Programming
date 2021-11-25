using namespace std;
#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 101; i < 200; i++)
	{
		if (i % 9 == 0)
		{
			sum += i;
		}
	}

	cout << sum;
}
