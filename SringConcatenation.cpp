#include <iostream>
//#include <string>
using namespace std;

int main()
{
	string prenom = "John ";
	string nom = "Doe";
	string nomComplet = prenom.append(nom);
	cout << nomComplet << "\n";

	return 0;
}