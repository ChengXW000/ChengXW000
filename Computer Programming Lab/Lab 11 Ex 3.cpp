#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream output;
	ifstream input;
	char filename[100];
	string string, in;
	int i, num;
	
	cout << "File name you would like to search for: " << endl;
	cin >> filename;
	
	input.open(filename);
	if (input.fail())
	{
		cout << "File does not exist"<< endl;
		cout << "Program ending" << endl;
		system("PAUSE");
		return 0;
	}
	cout << "What is the string you are searching for: " << endl;
	cin >> string;
	
	while(!input.eof()){
		getline(input, in, ' ');
		if(string == in)
			i++;
	}
	
	cout << "The string " << string << " appears " << i << " times"<< endl; 
	input.close();	
	return 0;
}