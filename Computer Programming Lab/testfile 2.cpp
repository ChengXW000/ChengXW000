#include <iostream>
#define SIZE 10
using namespace std;

void separatePosNeg (const int ori[], int positive[], int negative[], int size);

int main()
{
	int ori[SIZE], i, n, Ps, Ns;
	
	cout << "Please input 10 integers: " << endl;
	for(i = 0; i < SIZE; i++){
		cout << "Please input numbers for value " << i + 1 << " : " << endl;
		cin >> n;
		ori[SIZE] = n; 
	}
	int positive[SIZE], negative[SIZE];
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

void separatePosNeg(const int ori[], int pos[], int neg[], int size)
{
	int i, ps = 0, ns = 0;
	for(i = 0; i < size; i++){
		if(ori[i] >= 0){
			pos[ps] = ori[i];
			ps++;
		}
		if(ori[i] < 0)
			neg[ns] = ori[i];
			ns++;
		}
	return;
}