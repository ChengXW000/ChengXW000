#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double side_1, side_2, side_3, area, S;
	
	cout << "Please enter length of the first side of triangle: " << endl;
	cin >> side_1;
	
	cout << "Please enter length of the second side of triangle: " << endl;
	cin >> side_2;
	
	cout << "Please enter length of the third side of triangle: " << endl;
	cin >> side_3;
	// S is semi perimetre
	S = (side_1 + side_2 + side_3)/2;
	// The formula for calculating the triangle is Area = v[s(s-a)(s-b)(s-c)]
	if (side_1 + side_2 > side_3 && side_1 + side_3 > side_2 && side_2 + side_3 > side_1){
		cout << "Input forms a valid triangle" << endl;
		area = sqrt((S)*(S - side_1)*(S - side_2)*(S - side_3));
		cout << "The area of the triangle is: " << area << endl;
	}
	else
	cout << "Input is invalid" <<endl;		

	return 0;

}

			
			