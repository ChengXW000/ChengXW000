#include <iostream>
#include <ctime>

using namespace std;

int CoinFlip();
void DisplayBoard(int rumah_player1[], int rumah_player2[], int &board_size);
void MakeBoard(int rumah_player1[], int rumah_player2[], int &board_size);
void play(int rumah_player1[], int rumah_player2[], int &board_size, int &coinResult);
void P1move(int rumah_player1[], int rumah_player2[], int &board_size, int &picked);
void P2move(int rumah_player1[], int rumah_player2[], int &board_size,  int &picked);
int main()
{
    int i,board_size,hole_to_move;
    char ans,suspend_option;
    int coinResult;
	srand (time(NULL)); // random by setting 0

    //ask user if they want to play game
	cout << "Welcome to the Congkak game." << endl;
	cout << "Would you like to play? (Y/N)" << endl;
	cin >> ans;

	if (ans=='N')
    {
        exit(0);
    }
 
    //toss coin to see who moves first
	coinResult = CoinFlip();
 

    cout << "---------------" << endl;
    if (coinResult==1)
    {
        cout << "Player 1 moves !" << endl;
    }
    else{
        cout << "Player 2 moves !" << endl;
    }
    
    //ask the player what size of board they want
	cout << "Please select the size of the board between 5 to 9 holes each side: " << endl;
	cin >> board_size;
	int rumah_player1[board_size+1] = {0}, rumah_player2[board_size+1] = {0};
    //make the board in memory
    MakeBoard(rumah_player1, rumah_player2, board_size);
    //display the congkak board
	DisplayBoard(rumah_player1, rumah_player2, board_size);

    
    //call function to actually play the game
	play(rumah_player1, rumah_player2, board_size, coinResult);

	return 0;
}

int CoinFlip() //coin flip funtion
{
	int coinResult = rand() % 2;

	if (coinResult == 0)
		return 1;
	else
		return 2;
}
void DisplayBoard(int rumah_player1[], int rumah_player2[], int &board_size)
{
	int i;
	cout << "-------CURRENT MATCH------" << endl;
	cout << "\t" << "Player 1"  << endl;;
	for( i = 0 ; i < board_size ; i++){
		cout << "\t" << "  " << i+1 << " " ; 
	}
	cout << endl;
	for( i = 0 ; i < board_size ; i++){
		cout << "\t" << "( " << rumah_player1[i] << " )" << " "; 
	}
	cout << endl;
	if(board_size == 5)
		cout << "( " << rumah_player2[board_size] << " )" << " " << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << rumah_player1[board_size] << " )" << " " << endl; 
	if(board_size == 6)
		cout << "( " << rumah_player2[board_size]<< " )" << " " << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << rumah_player1[board_size] << " )" << " " << endl; 
	if(board_size == 7)
		cout << "( " << rumah_player2[board_size] << " )" << " " << "\t" << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << rumah_player1[board_size] << " )" << " " << endl; 
	if(board_size == 8)
		cout << "( " << rumah_player2[board_size]<< " )" << " " << "\t" << "\t" << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << rumah_player1[board_size] << " )" << " " << endl; 
	if(board_size == 9)
		cout << "( " << rumah_player2[board_size] << " )" << " " << "\t" << "\t" << "\t" << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << rumah_player1[board_size] << " )" << " " << endl; 
	for( i = board_size -1 ; i >= 0 ; i--){
		cout << "\t" << "( " << rumah_player2[i] << " )" ; 
	}
	cout << endl;
	for( i = board_size -1 ; i >= 0 ; i--){
		cout << "\t" << "  " << i+1 << " " ; 
	}
	cout << endl;
	cout << "\t"  << " Player 2"<< endl;;
	return;
}

void MakeBoard(int rumah_player1[], int rumah_player2[], int &board_size)
{	
	int i;
	for(i =0; i <  board_size ; i++){
		rumah_player1[i] = board_size;
		rumah_player2[i] = board_size;
	}
}

void play(int rumah_player1[], int rumah_player2[], int &board_size,  int &coinResult)
{
	int picked, Marbles_OnHold;
	char con;
	while(con != 'N'){
	while(rumah_player1[board_size] + rumah_player2[board_size] != (board_size+board_size)*board_size)
	{
		if (coinResult == 1){
			cout << "Player 1 please pick your move " << endl;
			cin >> picked;
			P1move(rumah_player1, rumah_player2, board_size, picked);
			DisplayBoard(rumah_player1, rumah_player2, board_size);
		}
		else if (coinResult == 2){
			cout << "Player 2 please pick your move " << endl;
			cin >> picked;
			P1move(rumah_player1, rumah_player2, board_size,picked);
			DisplayBoard(rumah_player1, rumah_player2, board_size);
		}
		cout << "Do you want to continue the game (Y/N)" << endl;
		cin >> con;
	}
	}
}

void P1move(int rumah_player1[], int rumah_player2[], int &board_size, int &picked)
{
	int i=0, j=0, Marbles_OnHold, count;
	Marbles_OnHold = rumah_player1[picked-1];
	rumah_player1[picked-1] = 0;
	for(i = picked; i < board_size && Marbles_OnHold !=0 ; i ++){
		rumah_player1[i]++;
		Marbles_OnHold--;
		}
	while(Marbles_OnHold != 0){
		i = 0;
		if(Marbles_OnHold != 0){
			rumah_player1[board_size]++;
			Marbles_OnHold--;
		}
		for(i = 0; i < board_size - 2 && Marbles_OnHold != 0 ; i ++){
			rumah_player2[i]++;
			Marbles_OnHold--;
			if (Marbles_OnHold == 0){
				Marbles_OnHold += rumah_player2[i];
				rumah_player2[i] = 0;
				if(Marbles_OnHold == 1){
					rumah_player2[i]++;
					Marbles_OnHold--;
					break;
				}
			}
		}
		if(Marbles_OnHold != 0){
			rumah_player2[board_size]++;
			Marbles_OnHold--;
			if(Marbles_OnHold==0){
				P1move(rumah_player1, rumah_player2, board_size, picked);
				DisplayBoard(rumah_player1, rumah_player2, board_size);
			}
		}
		for(i = 0; i < board_size && Marbles_OnHold !=0 ; i ++){
			rumah_player1[i]++;
			Marbles_OnHold--;
			if (Marbles_OnHold ==0){
				Marbles_OnHold += rumah_player1[i];
				rumah_player1[i] = 0;
				if(Marbles_OnHold == 1){
					rumah_player1[i]++;
					Marbles_OnHold--;
					break;
				}
			}
		}
	}

	if(Marbles_OnHold != 0){
		P1move(rumah_player1, rumah_player2, board_size, picked);
	}
}