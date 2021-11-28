using namespace std;
#include <cmath>
#include <iostream>

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = sqrt(b*b - 4*a*c);

    double x1 = (-b + discriminant) / 2 * a;
    double x2 = (-b - discriminant) / 2 * a;

    if (a == 0)
    {
        cout << "x=" << -c / b;
    }
    else if (discriminant != discriminant)
    {
        cout << "No solution!";
    }
    else if (discriminant>=0)
    {
        if (x1 == x2)
        {
            cout << "x1=x2=" << x1;
        }
        else
        {
            cout << "x1=" << x1 << " x2=" << x2;
        }
    }
    
}

