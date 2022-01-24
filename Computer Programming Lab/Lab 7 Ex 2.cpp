#include <iostream>

using namespace std;
void sortInc( char& ch1, char& ch2, char& ch3);
void sortDec( char& ch1, char& ch2, char& ch3);

int main()
{
	char ch1, ch2, ch3;
	cout << "Please input 3 characters: " << endl;
	cin >> ch1 >> ch2 >> ch3;

	sortInc(ch1, ch2, ch3);
	sortDec(ch1, ch2, ch3);
	
	return 0;
}

void sortInc (char& ch1, char& ch2, char& ch3)
{
	if (ch1 > ch2 && ch2 > ch3)
		cout << "The increasing order is: " << ch3 << ", " << ch2 << ", " << ch1 <<endl;
	if (ch1 > ch3 && ch3 > ch2)
		cout << "The increasing order is: " << ch2 << ", " << ch3 << ", " << ch1 <<endl;
	if (ch2 > ch3 && ch3 > ch1)
		cout << "The increasing order is: " << ch1 << ", " << ch3 << ", " << ch2 <<endl;
	if (ch2 > ch1 && ch1 > ch3)
		cout << "The increasing order is: " << ch3 << ", " << ch1 << ", " << ch2 <<endl;
	if (ch3 > ch2 && ch2 > ch1)
		cout << "The increasing order is: " << ch1 << ", " << ch2 << ", " << ch3 <<endl;
	if (ch3 > ch1 && ch1 > ch2)
		cout << "The increasing order is: " << ch2 << ", " << ch1 << ", " << ch3 <<endl;
	if (ch1 == ch2 && ch2 > ch3)
		cout << "The increasing order is: " << ch3 << ", " << ch2 << ", " << ch1 <<endl;
	if (ch1 == ch3 && ch3 > ch2)
		cout << "The increasing order is: " << ch2 << ", " << ch3 << ", " << ch1 <<endl;
	if (ch2 == ch3 && ch3 > ch1)
		cout << "The increasing order is: " << ch1 << ", " << ch3 << ", " << ch2 <<endl;
	if (ch1 == ch2 && ch2 < ch3)
		cout << "The increasing order is: " << ch1 << ", " << ch2 << ", " << ch3 <<endl;
	if (ch1 == ch3 && ch3 < ch2)
		cout << "The increasing order is: " << ch1 << ", " << ch3 << ", " << ch2 <<endl;
	if (ch2 == ch3 && ch3 < ch1)
		cout << "The increasing order is: " << ch2 << ", " << ch3 << ", " << ch1 <<endl;
	if (ch1 == ch2 && ch2 == ch3)
		cout << "There is no order since all is the same: " << ch1 << ", " << ch2 << ", " << ch3 <<endl;
}

void sortDec( char& ch1, char& ch2, char& ch3)
{
	if (ch1 > ch2 && ch2 > ch3)
		cout << "The decreasing order is: " << ch1 << ", " << ch2 << ", " << ch3 <<endl;
	if (ch1 > ch3 && ch3 > ch2)
		cout << "The decreasing order is: " << ch1 << ", " << ch3 << ", " << ch2 <<endl;
	if (ch2 > ch3 && ch3 > ch1)
		cout << "The decreasing order is: " << ch2 << ", " << ch3 << ", " << ch1 <<endl;
	if (ch2 > ch1 && ch1 > ch3)
		cout << "The decreasing order is: " << ch2 << ", " << ch1 << ", " << ch3 <<endl;
	if (ch3 > ch2 && ch2 > ch1)
		cout << "The decreasing order is: " << ch3 << ", " << ch2 << ", " << ch1 <<endl;
	if (ch3 > ch1 && ch1 > ch2)
		cout << "The decreasing order is: " << ch3 << ", " << ch1 << ", " << ch2 <<endl;
	if (ch1 == ch2 && ch2 > ch3)
		cout << "The decreasing order is: " << ch1 << ", " << ch2 << ", " << ch3 <<endl;
	if (ch1 == ch3 && ch3 > ch2)
		cout << "The decreasing order is: " << ch1 << ", " << ch3 << ", " << ch2 <<endl;
	if (ch2 == ch3 && ch3 > ch1)
		cout << "The decreasing order is: " << ch2 << ", " << ch3 << ", " << ch1 <<endl;
	if (ch1 == ch2 && ch2 < ch3)
		cout << "The decreasing order is: " << ch3 << ", " << ch2 << ", " << ch1 <<endl;
	if (ch1 == ch3 && ch3 < ch2)
		cout << "The decreasing order is: " << ch2 << ", " << ch3 << ", " << ch1 <<endl;
	if (ch2 == ch3 && ch3 < ch1)
		cout << "The decreasing order is: " << ch1 << ", " << ch3 << ", " << ch2 <<endl;
	if (ch1 == ch2 && ch2 == ch3)
		cout << "There is no order since all is the same: " << ch1 << ", " << ch2 << ", " << ch3 <<endl;
}