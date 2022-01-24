#include <iostream>

using namespace std;

int main()
{
	int speed, time, second, minutes, hours, temp, distance;
	
	cout << "Please enter your speed in (kmph):" <<endl;
	cin >> speed;
	
	cout << "Please enter your time in seconds:" <<endl;
	cin >> temp; 
	
	
	distance = (speed*temp/3600);
	minutes = temp/60;
	second = temp%60;
	hours = minutes/60;
	minutes = minutes%60;
	
	
	cout << "\n" << "The speed is: " << speed << "kmph" <<endl;
	cout << "The time is: " << hours << ":" << minutes << ":" << second <<endl; 
	cout << "The distance traveled is: " << distance << "km" <<endl;
	
	return 0;

}