#include <iostream>
#include <cmath>

double distanceBetweenTwoPoints(double firstXCoord, double firstYCoord, double secondXCoord, double secondYCoord)
{
    return sqrt(((secondXCoord - firstXCoord) * (secondXCoord - firstXCoord)) + ((secondYCoord - firstYCoord) * (secondYCoord - firstYCoord)));
}

struct Point
{
    double xCoord;
    double yCoord;
};

int main()
{
    int amountOfPoints;

    std::cout << "How many points to enter:\n";
    std::cin >> amountOfPoints;
    if (amountOfPoints < 2 || amountOfPoints > 100)
    {
        std::cout << "Input out of bounds.\n";
        return 0;
    }

    Point* points = new Point[amountOfPoints];
    for (int i = 0; i < amountOfPoints; i++)
    {
        std::cout << "Enter x coordinate for point " << i + 1 << '\n';
        std::cin >> points[i].xCoord;

        std::cout << "Enter y coordinate for point " << i + 1 << '\n';
        std::cin >> points[i].yCoord;
    }

    double biggestDistance = 0, currentDistance = 0;
    for (int i = 0; i < amountOfPoints; i++)
    {
        if (i + 1 == amountOfPoints) continue;
        currentDistance = distanceBetweenTwoPoints(points[i].xCoord, points[i].yCoord, points[i + 1].xCoord, points[i + 1].yCoord);
        if (currentDistance > biggestDistance) biggestDistance = currentDistance;
    }

    std::cout << "Biggest distance between all points is:\n" << biggestDistance;

    delete[] points;
    return 0;
}
