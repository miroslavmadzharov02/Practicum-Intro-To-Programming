using namespace std;
#include <iostream>

int main()
{
    int year;

    cout << "Enter year:";
    cin >> year;

    if (year % 10 == 0 && (year % 100) / 10 == 0 )
    {
        year % 400 == 0 ? cout << year << " is a leap year." : cout << year << " is not a leap year.";
    }
    else
    {
        year % 4 == 0 ? cout << year << " is a leap year." : cout << year << " is not a leap year.";
    }
}

