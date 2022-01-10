#include <iostream>

void enterArray(int length, int arr[])
{
    std::cout << "Enter array values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }
}

bool areArrayNumsAscending(int* arr, int length)
{
    if (length == 1) return true;
    if (*arr > *(arr + 1)) return false;
    areArrayNumsAscending(++arr, --length);
}

int main()
{
    int length, arr[100];

    std::cout << "Enter array length:\n";
    std::cin >> length;

    enterArray(length, arr);

    std::cout << std::boolalpha << areArrayNumsAscending(arr, length);

    return 0;
}
