using namespace std;
#include <iostream>

int main()
{
	int lengthOfRow = 0 , leftSymbolCount = 1, rightSymbolCount;
	char leftSymbol, rightSymbol;

	cin >> lengthOfRow >> leftSymbol >> rightSymbol;

	rightSymbolCount = lengthOfRow - 1;

	for (int i = 0; i < lengthOfRow - 1; i++)
	{
		
			for (int i = 0; i < leftSymbolCount; i++)
			{
				cout << leftSymbol << " ";
			}

			for (int i = rightSymbolCount; i > 0; i--)
			{
				cout << rightSymbol << " ";
			}
		

		leftSymbolCount++;
		rightSymbolCount--;

		cout << endl;
	}
}

