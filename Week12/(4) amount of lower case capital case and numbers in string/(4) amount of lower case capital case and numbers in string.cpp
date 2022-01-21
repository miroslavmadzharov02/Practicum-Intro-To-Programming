#include <iostream>

void evaluate(const char *inputText)
{
    int lowerCaseAmount = 0, capitalCaseAmount = 0, numbersAmount = 0;

    while (*inputText != '\0')
    {
        if (*inputText >= 'a' && *inputText <= 'z') lowerCaseAmount++;
        if (*inputText >= 'A' && *inputText <= 'Z') capitalCaseAmount++;
        if (*inputText >= '0' && *inputText <= '9') numbersAmount++;

        inputText++;
    }

    std::cout << "Amount of lower case letters is = " << lowerCaseAmount << "\n";
    std::cout << "Amount of capital case letters is = " << capitalCaseAmount << "\n";
    std::cout << "Amount of numbers is = " << numbersAmount << "\n";
}

int main()
{
    char inputText[100];

    std::cout << "Enter input text:\n";
    std::cin.getline(inputText, 100);

    evaluate(inputText);

    return 0;
}
