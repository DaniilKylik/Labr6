#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float y, x, z;
	cout << "Enter y, x, z: " << endl;
	cin >> y >> x >> z;
	double a = abs((y - sqrt(abs(x))) * (x - ((y)) / (z + pow(x, 4) / 4)));
	cout << "A = " << a << endl;
}