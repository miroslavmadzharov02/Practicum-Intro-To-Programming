using namespace std;
#include <iostream>

int main()
{
    int fourDigitNum;
    
    cout << "Enter number:";
    cin >> fourDigitNum;

    int fourthDigit = fourDigitNum % 10;
    int thirdDigit = (fourDigitNum % 100)/10;
    int secondDigit = (fourDigitNum / 100)%10;
    int firstDigit = fourDigitNum / 1000;

    int sumOfDigits = firstDigit + secondDigit + thirdDigit + fourthDigit;

    cout << firstDigit << endl;
    cout << secondDigit << endl;
    cout << thirdDigit << endl;
    cout << fourthDigit << endl;
    cout << "The sum of the digits is: " << sumOfDigits;

}

