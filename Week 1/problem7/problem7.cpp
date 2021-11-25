using namespace std;
#include <cmath>
#include <iostream>


int main()
{
	int side1, side2, side3;
	cin >> side1 >> side2 >> side3;

	int perimeter = side1 + side2 + side3;
	double halfPerimeter = perimeter / 2;
	double area = sqrt(halfPerimeter*(halfPerimeter-side1)*(halfPerimeter - side2)*(halfPerimeter - side3));

	cout << "Perimeter: " << perimeter << ", Area: " << area;
}

