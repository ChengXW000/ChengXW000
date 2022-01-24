#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main ()
{
	double num;
    cout << "\nNumber\tSquare\tCube" << endl; // \t prints out a tab which is an undefinable ammount of space that aligns the next section of output to a horizontal tab on the screen.
    
    num = 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
                                
    num = ++num;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
    
    num = ++num;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	   
	num = ++num;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
    
    num = ++num;    
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	return 0;
	
}
    
		  
	  
 