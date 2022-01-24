#include <iostream>
#include <ctime>
using namespace std;

string CoinFlip();


int main()
{
	char ans, guess;

	unsigned seed = time(0);
	srand(seed);

	cout << "Welcome to the Congkak game." << endl;

	cout << "Would you like to play? (Y/N)" << endl;
	cin >> ans;
	
	string coinResult = CoinFlip();
	cout << coinResult << endl;
	return 0;
}

string CoinFlip() //flip funtion
{
	int coinResult = rand() % 2;

	if (coinResult == 0)
		return "Player 1 first";
	else
		return "Player 2 first";
}