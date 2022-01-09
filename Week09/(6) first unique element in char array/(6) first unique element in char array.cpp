#include <iostream>

int getFirstUniqueChar(char text[])
{
    char letter;
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        letter = text[i];

        for (int j = 0; text[j] != '\0'; j++)
        {
            if (letter == text[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            return letter;
        }

        count = 0;
    }

    return 0;
}

int main()
{
    char text[100];

    std::cout << "Enter text:\n";
    std::cin >> text;

    if (getFirstUniqueChar(text) != 0)
    {
        std::cout << char(getFirstUniqueChar(text));
    }
    else
    {
        std::cout << getFirstUniqueChar(text);
    }

    return 0;
}
