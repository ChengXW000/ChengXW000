#include <iostream>

using namespace std;

int main()
{
	int num;
	char colour;
	
	cout << "Please enter the number of resistor colour code: " << endl;
	cin >> num;
	
	if (num >= 0 && num <=9){
		if (num == 0)
		cout << "The colour is: Black" << endl;
		if (num == 1)
		cout << "The colour is: Brown" << endl;
		if (num == 2)
		cout << "The colour is: Red" << endl;
		if (num == 3)
		cout << "The colour is: Orange" << endl;
		if (num == 4)
		cout << "The colour is: Yellow" << endl;
		if (num == 5)
		cout << "The colour is: Green" << endl;
		if (num == 6)
		cout << "The colour is: Blue" << endl;
		if (num == 7)
		cout << "The colour is: Violet" << endl;
		if (num == 8)
		cout << "The colour is: Gray" << endl;
		if (num == 9)
		cout << "The colour is: White" << endl;
	}
	else
		cout << "The input is invalid" << endl;
	
	return 0;
}