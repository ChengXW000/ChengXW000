#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, x1, x2, y1, y2, m, b;
	cout << "Please enter the x coordinate for first point: " << endl;
	cin >> x1;
	
	cout << "Please enter the y coordinate for first point: " << endl;
	cin >> y1;
	
	cout << "Please enter the x coordinate for the second point: " << endl;
	cin >> x2;
	
	cout << "Please enter the y coordinate for the second point: " << endl;
	cin >> y2;
	
	x = x2 - x1;
	m = (y2 - y1)/(x);
	b = y1 - m*x1;
	
	if (x == 0)
	cout << "This input is invalid" <<endl;
	else if (m == 0 && b == 0)
	cout << "The line equation is: "<< "y = 0" << endl;
	else if (m >= 0 || m <= 0)
		if (m == -1 && b == 0)
		cout << "The line equation is: "<< "y = -x" << endl;
		else if (m == -1 && (b < 0 || b > 0)) 
			if (b > 0){
			cout << "The line equation is: "<< "y = -x + " << b << endl;
			}
			else
			cout << "The line equation is: "<< "y = -x " << b <<endl; 
		else if (m == 1 && b == 0)
		cout << "The line equation is: "<< "y = x" << endl;
		else if (m == 1 && (b < 0 || b > 0))
			if (b > 0){
			cout << "The line equation is: "<< "y = x + " << b << endl;
			}
			else
			cout << "The line equation is: "<< "y = x " << b << endl;
		else if (m == 0 && b != 0)
		cout << "The line equation is: "<< "y = " << b << endl;
		else if (b == 0 && (m < 0 || m > 0) && m != 1 && m != -1)
		cout << "The line equation is: "<< "y = " << m << "x" << endl;
		else if ( m != 1 && m != -1 && b != 0)
			if (b < 0)
			cout << "The line equation is: " << "y = " << m << "x " << b << endl;
			else
			cout << "The line equation is: " << "y = " << m << "x + " << b << endl;
		
	
	return 0;
}