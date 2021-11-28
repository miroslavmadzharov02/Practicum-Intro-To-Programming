using namespace std;
#include <iostream>

int main()
{
    int xPointCoord, yPointCoord,
        radius, xCircleCoord, yCircleCoord;

    cin >> xPointCoord >> yPointCoord >> 
        radius >> xCircleCoord >> yCircleCoord;

    bool isPointInside = (xPointCoord - xCircleCoord) * (xPointCoord - xCircleCoord) + 
        (yPointCoord - yCircleCoord) * (yPointCoord - yCircleCoord) <= radius * radius;

    cout << boolalpha << isPointInside;
}

