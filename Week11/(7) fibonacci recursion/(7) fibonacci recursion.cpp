#include <iostream>

int fibonacciNumber(int fibPosition)
{
    if (fibPosition == 0) return 0;
    if (fibPosition == 1) return 1;
    return fibonacciNumber(fibPosition - 1) + fibonacciNumber(fibPosition - 2);
}

int main()
{
    int fibPosition;

    std::cout << "Enter position of desired Fibonacci number:\n";
    std::cin >> fibPosition;

    std::cout << fibonacciNumber(fibPosition);

    return 0;
}
