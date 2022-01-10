using namespace std;
#include <iostream>

int main()
{
    int length;

    cout << "Display how many numbers: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << i * i + 3 * i << " ";
    }
}

