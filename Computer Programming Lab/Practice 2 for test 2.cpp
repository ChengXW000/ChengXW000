#include <iostream>

using namespace std;

int testeven(int);

int main()
{
	int num1, num2, temp;
	cout << "Please enter an integer: " << endl;
	cin >> num1;
	temp = testeven(num1);
	cout << temp << endl;
	return 0;
}

int testeven(int n)
{
	int i, temp = 0;
	if (n <= 0)
		return 0;
	else
		for(i = 2; i <= n ; i++ ){
			if((i%2) == 0)
				temp += i;
			}
	return temp;		
}