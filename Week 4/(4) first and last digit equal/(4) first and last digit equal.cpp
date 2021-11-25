using namespace std;
#include <iostream>

int main()
{
    int number;

    cin >> number;

    int lastDigit = number % 10;
    int numberCopy = number;

    while (numberCopy > 9)
    {
        numberCopy /= 10;
    }

    int firstDigit = numberCopy;

    cout << "The first digit of " << number << " is " << firstDigit << endl;
    cout << "The last digit of " << number << " is " << lastDigit << endl;

    if (firstDigit == lastDigit)
    {
        cout << "Those digits are equal.";
    }
    else
    {
        cout << "Those digits are not equal.";
    }
}

