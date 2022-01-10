#include <iostream>

int getFactorialNumRecursively(int number)
{
    if (number == 0) return 1;
    else return number * getFactorialNumRecursively(number - 1);
}

int main()
{
    int number;

    std::cout << "Enter number:\n";
    std::cin >> number;

    std::cout << "The factorial of " << number << " is = " << getFactorialNumRecursively(number);

    return 0;
}
