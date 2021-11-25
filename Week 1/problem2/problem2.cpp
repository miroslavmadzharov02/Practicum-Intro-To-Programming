using namespace std;
#include <iostream>

int main()
{
    int fourDigitNum;

    cout << "Enter number:";
    cin >> fourDigitNum;

    int fourthDigit = fourDigitNum % 10;
    int thirdDigit = (fourDigitNum % 100) / 10;
    int secondDigit = (fourDigitNum / 100) % 10;
    int firstDigit = fourDigitNum / 1000;

    int reversedNumber = fourthDigit*1000 + thirdDigit*100 + secondDigit*10 + firstDigit;

    cout << reversedNumber;
}

