using namespace std;
#include <iostream>

int main()
{
    int number, result = 1;
    
    cin >> number;

    while (number != 0)
    {
        result *= number;
        number--;
    }

    cout << result;
}

