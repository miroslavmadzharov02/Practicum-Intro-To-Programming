#include <iostream>

bool duplicates(int amountOfNums, long* pointers[])
{
    int count = 0;

    for (int i = 0; i < amountOfNums; i++)
    {
        for (int j = i + 1; j < amountOfNums; j++)
        {
            if (pointers[i] == pointers[j])
            {
                count++;
            }
        }
    }

    return count >= 2;
}

int main()
{
    int amountOfNums;
    long* pointers[100]{}, number;

    std::cout << "Enter amount of numbers:\n";
    std::cin >> amountOfNums;

    std::cout << "Enter number values:\n";
    for (int i = 0; i < amountOfNums; i++)
    {
        std::cin >> number;
        pointers[i] = &number;
    }

    std::cout << std::boolalpha << duplicates(amountOfNums, pointers);

    return 0;
}
