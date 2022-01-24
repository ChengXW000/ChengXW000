#include <iostream>
using namespace std;

int main () 
{
	int n, j;
	cout << "The prime numbers between 0 to 100 are: " ;
    for (n = 2; n < 100; n++) 
        for (j = 2; j <= n; j++)
        {
        	if (n == 2)
        		cout << n << " ";
            if (n % j == 0) 
                break;
            else if (n == j + 1)
                cout << n << " ";
        }   
    return 0;
}