#include <iostream>

using namespace std;
int isVowel(char);

int main()
{
	char c;
	int n;
	while (c != '0'){
		cout << "Please input a character (type 0 to end): " << endl;
		cin >> c;
		n += isVowel(c);
	}
	cout << "The number of vowels are: " << n << endl;
		
	return 0;
}

int isVowel(char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
		x = 1;
	}
	else{
		x = 0;
	}
	return x;
}