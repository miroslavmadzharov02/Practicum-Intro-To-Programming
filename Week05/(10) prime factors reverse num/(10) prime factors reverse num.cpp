using namespace std;
#include <iostream>

int reverseNum(int number)
{
    int reverseNum = 0;

    do
    {
        reverseNum = reverseNum * 10 + number % 10;
        number /= 10;
    } while (number > 0);

    return reverseNum;
}

bool doesReverseHaveSameFactors(int number)
{
    bool conditionMet = true;
    int numReverse = reverseNum(number);

    for (int i = 2; i <= numReverse; i++)
    {
        while (numReverse % i == 0)
        {
            if (number % i != 0)
            {
                conditionMet = false;
                break;
            }

            number /= i;
            numReverse /= i;
        }
    }

    return conditionMet;
}

int main()
{
    int number;

    cin >> number;

    cout << boolalpha << doesReverseHaveSameFactors(number);
}

