#include <iostream>
using namespace std;

int main()
{

	int lompakko, piirakka;

	cout << "Paljonko sinulla on rahaa?";
	cin >> lompakko;
	cout << "Paljonko lihapiirakka maksaa?";
	cin >> piirakka;
	if (lompakko >= piirakka)
	{
		lompakko = lompakko - piirakka;
		cout << "rahat riitt��, lompakkoon j�� " << lompakko << " euroa.\n";
	}
	else
		cout << "Sinulla ei ole tarpeeksi rahaa. Paastoa!\n";

	return 0;
}