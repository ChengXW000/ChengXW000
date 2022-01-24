#include <iostream>
#define SIZE 10
using namespace std;

void separatePosNeg (double ori[], double positive[], double negative[], int size);

int main()
{
	double ori[10], n;
	int i, Ps, Ns;
	
	cout << "Please input 10 integers: " << endl;
	for(i = 0; i < SIZE; i++){
		cout << "Please input numbers for value " << i + 1 << " : " << endl;
		cin >> n;
		ori[i] = n; 
	}
	for(i = 0; i < SIZE; i++){
		cout << ori[i] << " ";
	}
	cout << endl;
	double positive[SIZE] = {0}, negative[SIZE] = {0};
	separatePosNeg(ori, positive, negative, SIZE);
	
	cout << "The positive array consist: " ;
	for(i = 0; i < SIZE; i++){
		cout << positive[i] << " ";
	}
	cout << endl;
	cout << "The negative array consist: " ;
	for(i = 0; i < SIZE; i++){
		cout << negative[i] << " ";
	}
	return 0;  
}

void separatePosNeg(double ori[], double positive[], double negative[], int size)
{
	int i, ps = 0, ns = 0;
	for(i = 0; i < size; i++){
		if(ori[i] >= 0)
			positive[ps++] = ori[i];
		}
	for(i = 0; i <size; i++){
		if(ori[i] < 0)
			negative[ns++] = ori[i];
		}

}
