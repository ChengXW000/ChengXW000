#include <iostream>

using namespace std;

int max(int, int);
int max4(int, int, int, int);

int main()
{
	int num1, num2, num3, num4, temp;
	cout << "Please input 4 numbers:" << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	temp = max4(num1, num2, num3, num4);
	cout << "The biggest integer is: " << temp << endl;
	
	return 0;
}

int max(int num1, int num2)
{
	if(num1 >= num2)
		return num1;
	else if(num2 > num1)
		return num2;
	else if (num1 == num2)
		return 0;
}

int max4(int num1, int num2, int num3, int num4)
{
	if(num1 >= num2 && num1 >= num3 && num1 >= num4)
		return num1;
	else if(num2 >= num1 && num2 >= num3 && num2 >= num4)
		return num2;
	else if(num3 >= num1 && num3 >= num2 && num3 >= num4)
		return num3;
	else if(num4 >= num1 && num4 >= num3 && num4 >= num2)
		return num4;
}