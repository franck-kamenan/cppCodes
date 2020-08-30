#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nomComplet;
	cout << "Entre ton nom complet: \n";
	getline(cin, nomComplet);
	cout << "Ton nom complet est: " << nomComplet << "\n";

	return 0;
}