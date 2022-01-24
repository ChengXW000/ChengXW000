#include <iostream>

using namespace std;
void SquareandCube (int *x, int *y, int *z);

int main ()
{
	int x, y, z;
	cout << "Please input 3 intergers:" << endl;
	cin >> x >> y >> z;
	SquareandCube (&x, &y, &z);
	
	return 0;
}

void SquareandCube (int *x, int *y, int *z)
{
	cout << "The square of integer " << *x << " is: " << *x**x <<endl;
	cout << "The cube of integer " << *x << " is: " << *x**x**x <<endl;
	cout << endl;
	cout << "The square of integer " << *y << " is: " << *y**y <<endl;
	cout << "The cube of integer " << *y << " is: " << *y**y**y <<endl;
	cout << endl;
	cout << "The square of integer " << *z << " is: " << *z**z <<endl;
	cout << "The cube of integer " << *z << " is: " << *z**z**z <<endl;
}