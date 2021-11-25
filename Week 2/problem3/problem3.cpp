using namespace std;
#include <iostream>

int main()
{
    int linearCoeff, freeTerm;

	cin >> linearCoeff >> freeTerm;

    if (linearCoeff != 0)
        cout << " x = " << -freeTerm / linearCoeff << endl;
    else if (linearCoeff == 0 && freeTerm == 0)
        cout << "INF" << endl;
    else
        cout << "NO!" << endl;
	
}

