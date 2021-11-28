using namespace std;
#include <iostream>

int main()
{
    int num1;
    int num2;

    cin >> num1 >> num2;

    int valueOfnum1 = num1;
    num1 = num2;
    num2 = valueOfnum1;

    cout << "First number:" << num1 << endl;
    cout << "Second number:" << num2 << endl;
}

