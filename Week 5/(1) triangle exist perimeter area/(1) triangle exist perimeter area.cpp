using namespace std;
#include <cmath>
#include <iostream>

void doesTriangleExist(int firstSide, int secondSide, int thirdSide)
{
	if (firstSide < secondSide + thirdSide
		&& secondSide < firstSide + thirdSide
		&& thirdSide < secondSide + thirdSide)
	{
		cout << "Triangle exists." << endl;
	}
	else
	{
		cout << "Triangle doesn't exist." << endl;
	}
}

int perimeter(int firstSide, int secondSide, int thirdSide)
{
	return firstSide + secondSide + thirdSide;
}

int area(int firstSide, int secondSide, int thirdSide)
{
	int semiPerimeter = perimeter(firstSide, secondSide, thirdSide) / 2;
	return sqrt(semiPerimeter*(semiPerimeter-firstSide)*(semiPerimeter-secondSide)*(semiPerimeter-thirdSide));
}

int main()
{
	int count, firstSide, secondSide, thirdSide;
    cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> firstSide >> secondSide >> thirdSide;
		doesTriangleExist(firstSide, secondSide, thirdSide);
		cout << "Perimeter=" << perimeter(firstSide, secondSide, thirdSide) << endl;
		cout << "Area=" << area(firstSide, secondSide, thirdSide);
	}
}

