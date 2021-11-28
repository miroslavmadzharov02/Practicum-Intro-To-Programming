using namespace std;
#include <iostream>

int main()
{
    int num1, num2;
    char symbol;

    cin >> num1;

    cin >> symbol;

    cin >> num2;

    switch (symbol)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if (num2!=0)
        {
            cout << num1 / num2;
        }
        else
        {
            cout << "Error.";
        }
        break;
    default:
        break;
    }
}

