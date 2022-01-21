#include <iostream>

int wordLength(const char *word, const int &startingIndex)
{
    int length = 0;

    for (int i = startingIndex; word[i] != '\0' && word[i] != ' '; i++)
    {
        length++;
    }

    return length;
}

char* pointerToLongestWord(char *inputText)
{
    char *longestWordStart = inputText;
    int currentWordLength = wordLength(inputText, 0);
    int longestWordLength = currentWordLength;

    int count = currentWordLength - 1;
    while (inputText[count - 1] != '\0')
    {
        currentWordLength = wordLength(inputText, count);

        if (currentWordLength > longestWordLength)
        {
            longestWordLength = currentWordLength;
            longestWordStart = &(inputText[count]);
        }

        count += currentWordLength + 1;
    }

    char* longestWord = new char[longestWordLength + 1];

    for (int i = 0; i < longestWordLength; i++)
    {
        longestWord[i] = *(longestWordStart + i);
    }
    longestWord[longestWordLength] = '\0';

    return longestWord;
}

int main()
{
    char inputText[100];

    std::cout << "Enter input text:\n";
    std::cin.getline(inputText, 100);

    std::cout << "The longest word is " << pointerToLongestWord(inputText);

    return 0;
}
