#include <iostream>
#define SIZE 5
using namespace std;

int sumOFEven (const int* array, int size);
double sumOFEven (const double* array, int size);

int main()
{
	int n1, n, i, intarray[SIZE], intsum;
	double n2, doublearray[SIZE], doublesum;
	cout << "Is the velues integers or double value (0 for integer 1 for double): " << endl;
	cin >> n;
	
	if(n == 0){
		cout << "Please input 5 integers: " << endl;
			for(i = 0; i < SIZE ; i++){
			cout << "Please input numbers for " << i + 1 << " value: " << endl;
			cin >> n1;
			intarray[i] = n1;
			}
		intsum = sumOFEven(intarray, SIZE);
		cout <<"The sum is: " << intsum;
	}
	else if(n == 1){
		cout << "Please input 5 double values: " << endl;
			for(i = 0; i < SIZE ; i++){
			cout << "Please input numbers for " << i + 1 << " value: " << endl;
			cin >> n2;
			intarray[i] = n2;
			}
		doublesum = sumOFEven(doublearray, SIZE);
		cout <<"The sum is: " << doublesum;
	}
		
	return 0;
		
}

int sumOFEven (const int* array, int size)
{
	int temp, i;
	for(i = 0 ; i < size ; i++)
	{
		if(i%2==0)
			temp += array[i];
	}
	return temp;
}

double sumOFEven (const double* array, int size)
{
	double temp;
	int i;
	for(i = 0 ; i < size ; i++)
	{
		if(i%2==0)
			temp += array[i];
	}
	return temp;
}