#include <iostream>
#include <cstring>
using namespace std;
char* reverse(char string[], int n);

int main()
{
	char in[100]; 
	int size;
	char out[size];
	char *pointer = in;
	cout << "Please enter string (alphabets only): " << endl;
	cin >> in;
	size = strlen(in);

	reverse(pointer, size);
	cout << endl;
	cout << "The output is: " << endl;
	cout << pointer;
	
	return 0;
}

char* reverse(char string[], int n)
{
	int i;
	char temp;
	for(i = 0;  i < n ; i++ ){
		if(islower(string[i]))
			string[i] = toupper(string[i]);
		else if(isupper(string[i]))
			string[i] = tolower(string[i]);
		
	}
	return string;

}