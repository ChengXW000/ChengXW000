#include <iostream>
using namespace std;

int GCD(int, int);

int main()
{
	int x, y;
	do {
	cout << "Please input 2 integer (make sure the first number is larger than the second number):" <<endl;
	cin >> x >> y;
	} while (y >= x);

	cout << "The greatest common divisor of " << x << " and " << y << " is: " << GCD(x, y) <<endl;
	
	return 0;
 } 
 
int GCD(int x, int y)
{
	if (y != 0)
		return GCD(y, (x % y));
	else
 		return x; 		
}