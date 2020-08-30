#include <iostream>
//#include <string>
using namespace std;

int main()
{
	string monString = "Salut";
	cout << monString[1] << "\n";

	monString[0] = 'L';
	cout << monString << "\n";

	return 0;
}