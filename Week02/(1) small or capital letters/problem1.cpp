using namespace std;
#include <iostream>

int main()
{
    char letter;
    
    cin >> letter;

    if (letter >= 'a' && letter <='z')
    {
        cout << "The upper character of the letter is:" << char(letter - 32);
    }
    else if (letter >= 'A' && letter <= 'Z')
    {
        cout << "The lower character of the letter is:" << char(letter + 32);
    }
    else
    {
        cout << "Invalid letter.";
    }
}

