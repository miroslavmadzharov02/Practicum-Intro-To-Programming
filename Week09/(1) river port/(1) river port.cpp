#include <iostream>

void enterArray(int length, int arr[], int capacity)
{
    std::cout << "Enter array values:\n";
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
        if (arr[i] > capacity)
        {
            std::cout << arr[i] << " weighs more than the max capacity of the ship.\n";
            return;
        }
    }
}

void getShipWeightEveryTrip(int capacity, int shipmentsCount, int shipmentsWeight[])
{
    int count = 0;

    for (int i = 0; i < shipmentsCount; i++)
    {
        count += shipmentsWeight[i];
        if (count >= capacity)
        {
            std::cout << count - shipmentsWeight[i] << " ";
            count = shipmentsWeight[i];
        }
    }
}

int main()
{
    int capacity, shipmentsCount, shipmentsWeight[109];

    std::cout << "Enter how much storage the ship has:\n";
    std::cin >> capacity;

    if (capacity < 100 || capacity > 500)
    {
        std::cout << "Invalid ship capacity value.\n";
        return 0;
    }

    std::cout << "Enter how many shipments there are:\n";
    std::cin >> shipmentsCount;

    if (shipmentsCount < 10 || shipmentsCount > 109)
    {
        std::cout << "Invalid shipments amount value.\n";
        return 0;
    }

    enterArray(shipmentsCount, shipmentsWeight, capacity);

    getShipWeightEveryTrip(capacity, shipmentsCount, shipmentsWeight);

    return 0;
}

