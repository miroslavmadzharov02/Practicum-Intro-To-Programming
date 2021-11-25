using namespace std;
#include <iostream>

int main()
{
	int tomatos, peppers, carrots, olives, potatos, flavoring;
	bool hasFriend;

	cin >> tomatos >> peppers >> carrots >> olives >> potatos >> flavoring >> hasFriend;

	bool isSaladPossible = tomatos >= 1 && peppers >= 2 && carrots >= 4
		&& olives >= 3 && potatos >= 3 && flavoring >= 150
		&& hasFriend == false;

	bool isSoupPossible = tomatos >= 2 && peppers >= 3 && carrots >= 5
		&& olives >= 6 && potatos >= 10 && flavoring >= 200
		&& hasFriend == true;

	bool isCasserolePossible = tomatos >= 5 && peppers >= 6 && carrots >= 12
		&& olives >= 7 && potatos >= 12 && flavoring >= 300
		&& hasFriend == true;

	isSaladPossible ? cout << "Taicho can cook salad." << endl : cout << "Taicho cannot cook salad." << endl;
	isSoupPossible ? cout << "Taicho can cook soup." << endl : cout << "Taicho cannot cook soup." << endl;
	isCasserolePossible ? cout << "Taicho can cook casserole." << endl : cout << "Taicho cannot cook casserole." << endl;
}

