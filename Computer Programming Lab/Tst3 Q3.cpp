#include <iostream>
#define PI 3.14159265
using namespace std;

void input(double&, double&);
void compute(double& , double&, double&, double&);
void output(double&, double&);

int main()
{
	double height, radius, volume, area;
	input(height, radius);
	compute(height, radius, volume, area);
	output(volume, area);
	return 0; 
}

void input( double& height, double& radius)
{
	cout << "Please input height of cylinder: " << endl;
	cin >> height;
	cout << "Please input radius of cylinder: " << endl;
	cin >> radius;
	return;
}

void compute(double& height, double& radius, double& volume, double& area)
{
	area = (2*PI*radius*height) + (2*PI*radius*radius);
	volume = (PI*radius*radius*height);
	return;
}

void output(double& volume, double& area)
{
	cout << "The volume is: " << volume << endl;
	cout << "The area is: " << area << endl;
	return;
}