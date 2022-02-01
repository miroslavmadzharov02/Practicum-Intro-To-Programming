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

char* returnLowerAlphabetArray(char alphabet[])
{
    char letter = 'a';

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = letter;
        letter++;
    }

    return alphabet;
}

char* returnCapitalAlphabetArray(char alphabet[])
{
    char letter = 'A';

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = letter;
        letter++;
    }

    return alphabet;
}

void subLettersToNumArr(char* word, int* alphabetToIntArr, int count, char* lowerAlphabetArr, char* capitalAlphabetArr)
{
    if (count == sizeCharArray(word)) return;
    
    int index = 0;

    for (int i = 0; i < 26; i++)
    {
        if (word[count] == lowerAlphabetArr[i]) index = i;
        else if (word[count] == capitalAlphabetArr[i]) index = i;
    }

    std::cout << alphabetToIntArr[index];
    subLettersToNumArr(word, alphabetToIntArr, ++count, lowerAlphabetArr, capitalAlphabetArr);
}

int main()
{
    char word[100];

    std::cout << "Enter word:\n";
    std::cin >> word;

    int alphabetToIntArr[] = {3, 5, 0, 3, 3, 7, 6, 5, 1, 1, 7, 2, 3, 9, 0, 5, 2, 5, 2, 7, 5, 7, 4, 9, 7, 7};

    char lowerAlph[27];
    lowerAlph[26] = '\0';
    char* lowerAlphabetArr = returnLowerAlphabetArray(lowerAlph);

    char capitalAlph[27];
    capitalAlph[26] = '\0';
    char* capitalAlphabetArr = returnCapitalAlphabetArray(capitalAlph);

    subLettersToNumArr(word, alphabetToIntArr, 0, lowerAlphabetArr, capitalAlphabetArr);

    return 0;
}
