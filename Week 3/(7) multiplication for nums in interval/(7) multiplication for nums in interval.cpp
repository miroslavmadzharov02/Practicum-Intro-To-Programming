using namespace std;
#include <iostream>

int main()
{
    int leftBorder, rightBorder, result = 1;

    cin >> leftBorder >> rightBorder;

	while (leftBorder <= rightBorder)
	{
		result *= leftBorder;
		leftBorder++;
	}

	cout << result;
}

