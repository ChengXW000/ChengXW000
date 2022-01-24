#include <iostream>

using namespace std;

int main()
{
	int num;
	
	cout << "Please enter the number of resistor colour code: " << endl;
	cin >> num;
	
	switch(num)
	{
		case 0:
			cout << "The colour is: Black" << endl;
			break;
		case 1:
			cout << "The colour is: Brown" << endl;
			break;
		case 2:
			cout << "The colour is: Red" << endl;
			break;
		case 3:
			cout << "The colour is: Orange" << endl;
			break;
		case 4:
			cout << "The colour is: Yellow" << endl;
			break;
		case 5:
			cout << "The colour is: Green" << endl;
			break;
		case 6:
			cout << "The colour is: Blue" << endl;
			break;
		case 7:
			cout << "The colour is: Violet" << endl;
			break;
		case 8:
			cout << "The colour is: Gray" << endl;
			break;
		case 9:
			cout << "The colour is: White" << endl;
			break;
		default:
			cout << "The input is invalid" << endl;
	}
	
	return 0;
}