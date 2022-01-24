#include <iostream>

using namespace std;

int main()
{
	int N, i, j, k, num1, y;

	cout << "Please input size of array: " << endl;
	cin >> N;
	int num[N];
	for (i = 0; i < N ; i++){
		cout << "Please input numbers for array: " << endl;
		cin >> num1;
		num[i] = num1;
	}
	cout << "Please input a number: " <<endl;
	cin >> k;
	for (j = 0 ; j < N ; j++ ){
		if (num[j] == k){
			cout << "The position is at: " << j << endl;
			y = 1;
			break;
		}
		else 
			y = 0;
	}
	
	if (y == 0)
		cout << "The number is not in the list" << endl; 
	
	
	return 0;
} 