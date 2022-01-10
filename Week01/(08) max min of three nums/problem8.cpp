using namespace std;
#include <iostream>

int main()
{
    double firstNumber, secondNumber, thirdNumber;
    cin >> firstNumber >> secondNumber >> thirdNumber;
    double max = firstNumber;
    double min = firstNumber;
    if (secondNumber > max)
    {
        max = secondNumber;
    }
    if (thirdNumber > max)
    {
        max = thirdNumber;
    }

    if (min > secondNumber)
    {
        min = secondNumber;
    }
    if (min > thirdNumber)
    {
        min = thirdNumber;
    }

    cout << max << " " << min;
}

