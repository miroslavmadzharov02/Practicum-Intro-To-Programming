#include <iostream>

struct Planet
{
    char name[100];
    long double distanceFromTheSun;
    long double diameter;
    long double mass;
};

void initializePlanet(Planet& planet)
{
    std::cout << "Enter planet's name:\n";
    std::cin >> planet.name;
    std::cout << "Enter the distance from " << planet.name << " to the sun in km\n";
    std::cin >> planet.distanceFromTheSun;
    std::cout << "Enter " << planet.name << "'s diameter\n";
    std::cin >> planet.diameter;
    std::cout << "Enter " << planet.name << "'s mass\n";
    std::cin >> planet.mass;
}

void printPlanetInfo(Planet planet)
{
    std::cout << planet.name <<'\n';
    std::cout << "Distance from " << planet.name << " to the sun is " << planet.distanceFromTheSun << '\n';
    std::cout << planet.name << "'s diameter is " << planet.diameter << '\n';
    std::cout << planet.name << "'s mass is " << planet.mass << '\n';
}

void printSecondsNeededForLightFromTheSunToReachPlanet(Planet planet)
{
    const long double lightSpeed = 299792;
    const long double secondsValue = planet.distanceFromTheSun / lightSpeed;
    std::cout << "It will take " << secondsValue << " seconds for light from the sun to reach " << planet.name << '\n';
}

int main()
{
    Planet planet;
    initializePlanet(planet);
    printPlanetInfo(planet);
    printSecondsNeededForLightFromTheSunToReachPlanet(planet);

    return 0;
}
