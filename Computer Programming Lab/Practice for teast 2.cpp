#include <iostream>


using namespace std;

int FM(int, int);

int main()
{
	int num1, num2, temp;
	cout << "Please input 2 numbers:" << endl;
	cin>> num1 >> num2;
	temp = FM(num1, num2);
	cout << temp << endl;
	
	return 0;
}

int FM(int num1, int num2)
{
	if ((num1 % num2) != 0){
		return 0;
	}
	else {
		return 1;
	}
}