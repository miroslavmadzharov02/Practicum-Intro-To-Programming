using namespace std;
#include <iostream>

bool februaryDayNumberCheck(int day, int year)
{
	if (year % 4 == 0 || year % 10 == 0 && (year % 100) / 10 == 0)
	{
		if (day >= 1 && day <= 29)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (day >= 1 && day <= 28)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool validMonthNumberCheck(int month)
{
	if (month >= 1 && month <= 12)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool validYearNumberCheck(int year)
{
	if (year >= 1 && year < 2050)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool validDaysNumberCheck(int day, int month, int year)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day >= 1 && day <= 31)
		{
			return true;
		}
		else
		{
			return false;
		}
	case 4:
	case 6:
	case 9:
	case 11:
		if (day >= 1 && day <= 30)
		{
			return true;
		}
		else
		{
			return false;
		}
	case 2:
		return februaryDayNumberCheck(day, year);
	default:
		return false;
		break;
	}
}

bool isDateValid(int day, int month, int year)
{
	if (validDaysNumberCheck(day, month, year) && validMonthNumberCheck(month) && validYearNumberCheck(year))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;

	cout << boolalpha << isDateValid(day, month, year);
}

