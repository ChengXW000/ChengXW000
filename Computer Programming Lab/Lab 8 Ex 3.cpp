#include <iostream>

using namespace std;

int main()
{
	char char1, char2, x;
	int N, i, j;
	cout << "Please input size of array: " << endl;
	cin >> N;
	char gamma[N], delta[N], temp[N];
	for (i = 0; i < N ; i++){
		cout << "Please input characters for array: " << endl;
		cin >> char1;
		gamma[i] = char1;
	}
	for (i = 0; i < N ; i++){
		x = gamma[i]; 
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
			delta[j++] = x;
		}
			
	cout << "The gamma array consist " << endl;
	for(i=0; i<N; i++)
		cout << gamma[i] << " ";
	cout << endl;
	cout << "The delta array consist " << endl; 
	for(i=0; i<j; i++)
		cout << delta[i] << " ";
	return 0;
}