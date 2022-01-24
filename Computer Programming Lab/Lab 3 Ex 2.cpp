#include <iostream>
#include <cmath>

using namespace std;
                  
int main()
{
	float weight, height, BMI, temp;
	cout << "Please enter your weight in kilograms: " << endl;
	cin >> weight;
	
	cout << "Please enter your height in metres: " << endl;
	cin >> height;
	
	BMI = weight/(height*height);
	cout << "Your BMI is : " << BMI <<endl;
	if (BMI >= 18.5 && BMI < 25.0)
		cout << "Normal" << endl;
	else if (BMI >= 25.0 && BMI < 30.0)
		cout << "Overweight" << endl;
	else if (BMI >= 30.0)
		cout << "Obese" << endl;		    
	else if (BMI < 18.5)                    
		cout << "Underweight" << endl;
	
	return 0;
}