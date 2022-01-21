#include <iostream>

void enterArray(const int &length, int *arr)
{
    std::cout << "Enter grade values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

double getAverage(const int &length, int* arr)
{
    double sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    return sum / length;
}

int main()
{
    int gradesAmount;

    std::cout << "Enter the amount of grades you want to assign:\n";
    std::cin >> gradesAmount;

    int* grades = new int[gradesAmount];

    enterArray(gradesAmount, grades);

    std::cout << "The average of the grades is = " << getAverage(gradesAmount, grades);

    delete[] grades;
    return 0;
}
