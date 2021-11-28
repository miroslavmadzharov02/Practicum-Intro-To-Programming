using namespace std;
#include <iostream>

int numReverse(int number)
{
    int reverseNum = 0;
    
    do
    {
        reverseNum = reverseNum * 10 + number % 10;
        number /= 10;
    } while (number > 0);

    return reverseNum;
}

bool palindromeCheck(int number)
{
    return number == numReverse(number);
}

int main()
{
    int number;

    cin >> number;

    cout << boolalpha << palindromeCheck(number);
}

