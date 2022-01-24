#include <iostream>
#include <cmath>
#define PI 3.1415926535897932384626433
// include<cmath> if trigonometry is needed ex, sin, cos, tan
using namespace std;

int main ()
{
	float degree, radians, hypotenuse, opposite, adjacent, temp;
	
	cout << "Please enter the length of hypotenuse:" << endl;
	cin >> hypotenuse;
	
	cout << "Please enther you angle in degree:" << endl;
	cin >> degree;
	
	radians = degree*PI/180;
	opposite = hypotenuse*sin(radians); // sin, cos, tan accepts value in radians
	adjacent = hypotenuse*cos(radians);
	
	cout << "\nThe opposite is: " << opposite << endl;
	cout << "The adjacent is: " << adjacent <<endl;

	
	return 0;
}
