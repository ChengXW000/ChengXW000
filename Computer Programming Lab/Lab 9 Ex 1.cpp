#include <iostream>

using namespace std;


int main()
{
	int SIZE, i;
	char ctemp;
	cout << "Please input array size: " <<endl;
	cin >> SIZE;
	char characters[SIZE];
	cout << "Please input characters into the array: " << endl;
	cin >> characters;
	
	for(i = 0 ; i < SIZE ; i++){
		ctemp = characters[i];
		if(ctemp == 'a' || ctemp == 'e' || ctemp == 'i' || ctemp == 'o' || ctemp == 'u')
			characters[i] = ' ';
		else
			continue;
		}
	cout << "The array now consist: " << endl;
	
	for(i = 0; i < SIZE ; i++){
		cout << characters[i];
	}
	
	return 0;
}