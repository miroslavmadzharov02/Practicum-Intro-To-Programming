using namespace std;
#include <iostream>

int main()
{
    int num1;
    int num2;

    cin >> num1 >> num2;

    int product = num1 * num2;
    int lastDigitOfProduct = product % 10;
    bool isItEven = (product % 2 == 0);

    cout << product << ", " << lastDigitOfProduct << " " << isItEven;
}

