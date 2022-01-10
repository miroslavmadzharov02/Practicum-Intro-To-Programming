#include <iostream>

int digitsCount(int number)
{
    int count = 0;

    while (number != 0)
    {
        count++;
        number /= 10;
    }

    return count;
}

int getBinaryNumberRecursively(int number, int digitsAmount)
{
    if (number == 0) return 0;
    return number % 2 * digitsAmount + getBinaryNumberRecursively(number / 2, digitsAmount * 10);
}

int main()
{
    int number;

    std::cout << "Enter number to be converted to binary:\n";
    std::cin >> number;

    std::cout << "The binary number of " << number << " is " << getBinaryNumberRecursively(number, 1);

    return 0;
}
