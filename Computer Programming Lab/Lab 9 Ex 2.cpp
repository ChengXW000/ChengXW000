#include <iostream>
#define SIZE 10
using namespace std;

double average(double *array, int size);

#include <iostream>
#define SIZE 10
using namespace std;

double average(double *array, int size);

int main()
{
	double array[SIZE], value, n;
	int i;
	cout << "Please input 10 double values" << endl;

	for(i = 0; i < 10 ; i++){
		cout << "Please input numbers for value " << i + 1 << " : " << endl;
		cin >> n;
		array[i] = n;
		n = 0;
	}
	
	value = average(array, SIZE);
	
	cout << "The average value is: " << value <<endl;
	
	return 0;
}

double average(double *array, int size)
{
	int i;
	double value, temp;
	for(i = 0 ; i < size ; i++)
	{
		temp += array[i];
	}
	value = temp/size;
	return value;
}