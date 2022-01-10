#include <iostream>

int sizeCharArray(char* arr)
{
    int count = 0;

    while (*arr != '\0')
    {
        count++;
        arr++;
    }

    return count;
}

char* concatTwoCharArrays(char *firstText, char *secondText)
{
    int firstTextSize = sizeCharArray(firstText);
    int secondTextSize = sizeCharArray(secondText);
    char* combinedText = new char[firstTextSize + secondTextSize + 1];

    for (int i = 0; i < firstTextSize; i++)
    {
        combinedText[i] = firstText[i];
    }

    for (int j = firstTextSize, i = 0; j < firstTextSize + secondTextSize + 1; j++, i++)
    {
        combinedText[j] = secondText[i];
    }

    return combinedText;
}

int main()
{
    char firstText[100], secondText[100];

    std::cout << "Enter first text:\n";
    std::cin >> firstText;

    std::cout << "Enter second text:\n";
    std::cin >> secondText;

    char* combinedText = concatTwoCharArrays(firstText, secondText);

    std::cout << "The combined text is: " << combinedText;

    return 0;
}
