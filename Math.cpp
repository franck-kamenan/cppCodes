#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << max(5, 10) << "\n";
	cout << min(5, 10) << "\n";

	cout << sqrt(64) << "\n";
	cout << round(2.6) << "\n";
	cout << log(2) << "\n";

	int x = 8;
	cout << abs(x) << "\n";
	cout << asin(x) << "\n";
	cout << acos(x) << "\n";
	cout << atan(x) << "\n";
	cout << cbrt(x) << "\n";
	cout << ceil(x) << "\n";
	cout << cos(x) << "\n";
	cout << cosh(x) << "\n";
	cout << exp(x) << "\n";
	cout << expm1(x) << "\n";
	cout << fabs(x) << "\n";
	cout << floor(x) << "\n";
	cout << sin(x) << "\n";
	cout << sinh(x) << "\n";
	cout << tan(x) << "\n";
	cout << tanh(x) << "\n";
	int y = 12;
	cout << fdim(x, y) << "\n";
	cout << hypot(x, y) << "\n";
	cout << fmax(x, y) << "\n";
	cout << fmin(x, y) << "\n";
	cout << fmod(x, y) << "\n";
	cout << pow(x, y) << "\n";
	int z = 14;
	cout << fma(x, y, z) << "\n";

	return 0;
}