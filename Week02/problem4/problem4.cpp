using namespace std;
#include <iostream>

int main()
{
    int month, year;
    cin >> month >> year;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30";
		break;
	case 2:
		if (year % 4 == 0)
		{
			cout << "29";
		}
		else if (year % 10 == 0 && (year % 100) / 10 == 0) 
		{
			cout << "29"; 
		}
		else
		{
			cout << "28";
		}
		break;
	default:
		break;
	}
}

