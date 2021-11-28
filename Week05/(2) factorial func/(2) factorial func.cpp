using namespace std;
#include <iostream>

int factorial(int number)
{
    int result = 1;

    while (number != 0)
    {
        result *= number;
        number--;
    }

    return result;
}

int main()
{
    int number;

    cin >> number;
    cout << factorial(number);
}

