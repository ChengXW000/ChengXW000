#include <iostream>

using namespace std;

int numofdigit(int);

int main()
{
	int num, N;
	cout << "Please input an integer: " << endl;
	cin >> N;
	
	num = numofdigit(N);
	
	cout << "Is " << num << " digit" << endl;
	
	return 0 ;
}

int numofdigit(int N)
{
	int num;
	if(N > 0)
		return 1 + numofdigit(N/10);
	else
		return 0;
		
}