#include <iostream>

using namespace std;

double funR(double);

int main()
{
	double n, ans;
	cout <<  "Please input a value: " << endl;
	cin >> n;
	
	ans = funR(n);
	cout << "The answer is: " << ans;
	
	return 0; 
}

double funR(double n)
{
	if(n == 1)
		return 4;
	else
		return (funR(n - 1) - 0.20);
	
}