#include <iostream>

int* decimalToBinary(int number)
{
    int binary[100], lastValue = 0;

    for (int i = 0; number > 0; i++)
    {
        binary[i] = number % 2;
        number = number / 2;
        lastValue++;
    }
    binary[lastValue] = -1;

    return binary;
}

void findBinaryNum(int number, int numToBinary)
{
    int count = 0, index = 0;

    int* binary = decimalToBinary(numToBinary);

    while (binary[index] != -1)
    {
        if (binary[index] == 1) count++;
        index++;
    }

    if (count == number)
    {
        std::cout << numToBinary;
        return;
    }

    findBinaryNum(number, ++numToBinary);
}

int main()
{
    int number;

    std::cout << "Enter number:\n";
    std::cin >> number;
    if (number < 1 || number > 20)
    {
        std::cout << "Out of bounds input.\n";
        return 0;
    }

    findBinaryNum(number, 1);

    return 0;
}
