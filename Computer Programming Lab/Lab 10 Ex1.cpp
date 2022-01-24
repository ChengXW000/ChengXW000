#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int i, j = 0, size;
	char in[100];
	cout << "Please input: " << endl;
	gets(in);
	size = strlen(in);
	char out[size];
	for(i = 0; i < size; i++){
		if((in[i] >= 'A' && in[i] <= 'Z') || (in[i] >= 'a' && in[i] <= 'z'))
			out[j++] = in[i];
	}
	cout << "The output is: " << endl;
	cout << out << endl;
	
	return 0;
}