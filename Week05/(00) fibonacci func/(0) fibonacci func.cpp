using namespace std;
#include <iostream>

int returnFibonacci(int position)
{
    int num1 = 0, num2 = 1, nextItem = 0;

    if (position == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < position - 1; i++)
        {
            nextItem = num1 + num2;
            num1 = num2;
            num2 = nextItem;
        }

        return nextItem;
    }
}

int main()
{
    int position;

    cin >> position;

    cout << returnFibonacci(position);
}

