#include <iostream>
#include <fstream>
#include <ctime>
#define SIZE 20
using namespace std;

int main()
{
	ofstream output, outputeven, outputodd;
	ifstream input;
	srand (time(NULL));
	input.open("lab11_2.txt");
	outputeven.open("evens.txt");
	outputodd.open("odds.txt");
	
	if (!input.fail())
	{
		cout << "File exist"<< endl;
		cout << "Program ending" << endl;
		system("PAUSE");
		return 0;
	}
	if (input.fail())
	{
		cout << "File does not exist"<< endl;
		output.open("lab11_2.txt");
		cout << "File created" << endl;
	}
	
	int integers, i, array[SIZE];
	for(i = 0; i < SIZE; i++){
		integers = (rand() % 10) + 1;
		array[i] = integers;
		output << array[i] << " ";
	}
	for(i = 0; i < SIZE; i++){
		if(array[i] % 2 == 0)
			outputeven << array[i] << " ";
		if(array[i] % 2 == 1)
			outputodd << array[i] << " ";
	}
	output.close();
	input.close();
	outputeven.close();
	outputodd.close();
	
	return 0;
}