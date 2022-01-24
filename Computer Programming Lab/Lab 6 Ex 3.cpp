#include <iostream>

using namespace std;
int MSD(int, int, int);
int LSD(int, int, int);

int main ()
{
	int num1, num2, num3;
	cout << "Please input number of integer of 3 digits" << endl;
	cin >> num1 >> num2 >> num3; 
	cout << "The result of the multiplication of MSD and LSD is : " << MSD(num1, num2, num3) * LSD(num1, num2, num3)<< endl;
	return 0;
}

int MSD(int m, int s, int d)
{
	int max = m;
	if (s > max)
		max = s;
	if (d > max)
		max = d;
		
	return max;
}

int LSD(int l, int s, int d)
{
	int low = l;
	if (s < low)
		low = s;
	if (d < low)
		low = d;
		
	return low;
}