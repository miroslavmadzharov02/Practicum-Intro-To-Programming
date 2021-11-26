using namespace std;
#include <iostream>

bool perfectNumberCheck(int length)
{
	int sum = 0;
    for (int i = 1; i <= length / 2; i++)
    {
        if (length % i == 0)
        {
            sum += i;
        }
    }

    return sum == length;
}

int main()
{
    int length;

    cin >> length;

	for (int i = 1; i <= length; i++)
	{
        if (perfectNumberCheck(i))
        {
            cout << i << " ";
        }
	}
}


