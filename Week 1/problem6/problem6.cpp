using namespace std;
#include <iostream>

int main()
{
	int side1, side2, side3;
	cin >> side1 >> side2 >> side3;

	cout << boolalpha << (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) << endl;
}

