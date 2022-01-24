#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream output;
	ifstream input;
	output.open("lab11_output.txt");
	input.open("lab11_1.txt");
	
	int integer, array[100], infile;
	double sum;
	float avg;
	int i = 0, j = 0, k = 0, temp;
	if (input.fail())
	{
		cout << "File does not exist"<< endl;
		cout << "Exit program"<< endl;
		system("PAUSE");
		return 0;
	}
	cout << "The original series of integer is: " ;
	while (!input.eof()){
		input >> integer;
		array[i++] = integer;
		sum += integer;
		cout << integer << " ";
	}
	cout << endl;
	for(j = 0; j<i; j++)
    {
        for(k=j+1; k<i; k++)
        {
            if(array[k] < array[j])
            {
                temp = array[j];
                array[j] = array[k];
                array[k] = temp;
            }
        }
    }
	for(j = 0; j < i; j++)
	{
		infile = array[j];
		output << infile << " ";
	}
	output.close();
	input.close();
	avg = sum/i;
	cout << "The sum of the numbers is: " << sum << endl;
	cout << "The average of the numbers is: " << avg << endl;
	
	
	return 0;
}