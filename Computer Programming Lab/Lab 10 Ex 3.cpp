#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	char in[100]; 
	int size, i, lower = 0, upper = 0, n, num = 0, j;
	char out[size];
	do{
	lower = 0, upper = 0, num =0;
	cout << "Please input your password (at least 7 characters long): " << endl;
	gets(in);
	size = strlen(in);
	char out[size];
	if(size < 7)
		cout << "The password is not long enough. " << endl;
	for(i = 0; i < size; i++){
		if(islower(in[i]))
			lower = 1;
		if(isupper(in[i]))
			upper = 1;
	}
	if(upper == 0)
		cout << "There is no uppercase letter. " <<endl;
	if(lower == 0)
		cout << "There is no lowercase letter. " << endl;
	for(i = 0; i < size; i++){
		n = in[i];
		if(n >= 48 && n <= 57)
			num = 1;
	}
	if(num == 0)
		cout << "There is no number. " << endl;
		cout << endl;
	}while(size < 7 || lower == 0 || upper == 0 || num == 0);
	for(i = 0; i < size; i++){
			out[j++] = in[i];
	}
	cout << "The password is accepted. " << endl;
	return 0;
}