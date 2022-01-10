#include <iostream>

int sizeCharArray(char *arr)
{
    int count = 0;

    while (*arr != '\0')
    {
        count++;
        arr++;
    }

    return count;
}

int main()
{
    char charArr[100];

    std::cin >> charArr;

    std::cout << "Number of values in char array: " << sizeCharArray(charArr);

    return 0;
}
