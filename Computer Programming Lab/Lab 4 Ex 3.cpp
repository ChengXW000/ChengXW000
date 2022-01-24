#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	
	srand (time(NULL)); 

	int choice, random;
	cout << "Pick your choice (0-Scissor, 1-Rock, 2-Paper): " << endl;
	cin >> choice;
	
	random = rand() % 3;
	if (random >= 0 && random <=2)
		if (random == 0)
		cout << "The computer picked: Scissor" << endl;
		else if (random == 1)
		cout << "The computer picked: Rock"<< endl;
		else
		cout << "The computer picked: Paper" << endl;
	
	if(random == choice) 
		cout<<"Draw\n";
    else if(random == 0 && choice == 1) 
		cout<<"You win\n";
    else if(random == 0 && choice == 2) 
		cout<<"Computer wins\n";
    else if(random == 1 && choice == 2) 
		cout<<"You win\n";
    else if(random == 2 && choice == 1) 
		cout<<"Computer wins\n";
    else if(random == 1 && choice == 0) 
		cout<<"Computer wins\n";
    else if(random == 2 && choice == 0) 
		cout<<"You win\n";
	else 
		cout << "The input is invalid" << endl;
	return 0;
}