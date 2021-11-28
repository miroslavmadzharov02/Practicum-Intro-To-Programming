using namespace std;
#include <iostream>

int main()
{
	int monthNumber;
	
	cin >> monthNumber;

	switch (monthNumber)
	{
	case 1:
	case 2:
	case 3:
	        cout << "The season is winter.";
		    break;
	case 4:
	case 5:
	case 6:
		    cout << "The season is spring.";
		    break;
	case 7:
	case 8:
	case 9: 
		    cout << "The season is summer.";
		    break;
	case 10:
	case 11:
	case 12:
		     cout << "The season is autumn.";
		     break;
	default:
		cout << "Invalid month.";
		break;
	}
}

