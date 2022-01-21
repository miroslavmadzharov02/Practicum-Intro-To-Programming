#include <iostream>

bool areAllValuesFromFirstStringInSecond(char* allValues, char* valuesToCompare)
{
    if (*allValues == '\0') return true;
    
    int counter = 0;

    while (valuesToCompare[counter] != '\0')
    {
        if (valuesToCompare[counter] == *allValues) return areAllValuesFromFirstStringInSecond(++allValues, valuesToCompare);
        counter++;
    }
    
    return false;
}

int main()
{
    char allValues[100], valuesToCompare[100]; //goodbook gbkod //returns true

    std::cout << "Enter first string:\n";
    std::cin >> allValues;

    std::cout << "Enter second string:\n";
    std::cin >> valuesToCompare;

    std::cout << std::boolalpha << areAllValuesFromFirstStringInSecond(allValues, valuesToCompare);

    return 0;
}
