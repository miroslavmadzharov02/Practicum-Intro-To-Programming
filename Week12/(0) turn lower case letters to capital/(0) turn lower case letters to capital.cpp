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

char* getChangedText(char* inputText, char* lettersToBecomeCapital)
{
    int firstTextSize = sizeCharArray(inputText);
    int secondTextSize = sizeCharArray(lettersToBecomeCapital);
    char* resultText = new char[firstTextSize + 1];
    resultText[firstTextSize] = '\0';

    for (int i = 0; i < firstTextSize; i++)
    {
        resultText[i] = inputText[i];
        for (int j = 0; j < secondTextSize; j++)
        {
            if (inputText[i] == lettersToBecomeCapital[j])
            {
                resultText[i] = inputText[i] + char('A' - 'a');
            }
        }
    }

    return resultText;
}

int main()
{
    char inputText[100], lettersToBecomeCapital[100];

    std::cout << "Enter input text:\n";
    std::cin.getline(inputText, 100);

    std::cout << "Enter letters to be changed to capital from first text:\n";
    std::cin >> lettersToBecomeCapital;

    char* resultText = getChangedText(inputText, lettersToBecomeCapital);

    std::cout << "The changed text is:\n";
    std::cout << resultText;

    return 0;
}
