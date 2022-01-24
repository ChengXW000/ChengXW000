#include <iostream>

using namespace std;

int main(){

	int num1 = 1, tempn = 0, n = 1;
	
	while(num1 != 0)
	{
		cout << "Enter integer (type 0 to end): " << endl;
		cin >> num1;
		if (num1 > tempn){
			tempn = num1;
			n = 1;
		}
		else if (num1 == tempn){
			n += 1;
		}
	}
	cout<<"The largest value is: "<< tempn << " and it was entered " << n << " times " << endl;


	return 0;
}