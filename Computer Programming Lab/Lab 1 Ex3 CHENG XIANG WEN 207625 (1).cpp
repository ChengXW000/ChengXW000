// Place your name here
#include <iostream>

using namespace std;

int main()
{
	
    float firstNumber, secondNumber, swapNumber;

// Prompt user to enter the first number.
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> swapNumber;
//Prompt user to enter the second number.
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;
// Echo print the input. //
    cout << endl << "You input the numbers as " << swapNumber << " and " << secondNumber << endl;
// Now we will swap the values.
    firstNumber = secondNumber;
	secondNumber = swapNumber;
// Output the values.
    cout << "After swapping, the values of the two numbers are ";
    cout << firstNumber << " and " << secondNumber << endl;
    system ("pause");

    return 0;
}
