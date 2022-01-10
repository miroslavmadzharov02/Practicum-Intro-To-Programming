#include <iostream>

bool isNumPowerOf2(int number)
{
    if (number <= 0) return false;
    if (number == 1 || number == 2) return true;
    if (number % 2 == 0)
    {
        isNumPowerOf2(number / 2);
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;

    std::cout << "Enter number to check if it's the power of 2:\n";
    std::cin >> number;

    std::cout << std::boolalpha << isNumPowerOf2(number);

    return 0;
}
