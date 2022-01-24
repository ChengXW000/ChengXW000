#include <iostream>

using namespace std;

int main(){
	
	float RM, RM1, year;
	RM1 = 2500;
	
	cout << "Year" << "\t" << "    Membership Fees (RM)" << endl;
	cout << "*******************************" << endl;
	for( year = 2021 ; year <= 2027 ; year++){
		RM1 += RM * 0.04;
		RM = RM1;
		cout << year << "\t" << "\t" << RM << endl;
	}
	
	return 0;
}