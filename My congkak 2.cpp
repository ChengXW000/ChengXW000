//There might be some bug because it is not a perfect code but I tried to debugged it everytime I found some so for most part it should be fine
#include <iostream>
#include <ctime>
#include <fstream>
#include <stdlib.h>
using namespace std;

void DisplayBoard(int board[], int board_size, int num); //initialize functions
void initialize(int board[], int board_size, int num);
void Welcome(int board[], int board_size, int num);
void playgame(int board[], int board_size, int num);
void moving(int board[], int board_size, int num);
void endgame(int board[], int board_size, int num);
void loadfile(int board[], int board_size, int num);
void safefile(int board[], int board_size, int num);


int main() // main function
{
	srand (time(NULL)); // random by setting 0
	int board_size, board[(board_size*2)+2], num;
	Welcome(board, board_size, num);
	return 0;
}

void playgame(int board[], int board_size, int num) //Function to play game
{
	int i;
	char ch;
	num = rand() % 2+1;
	cout << "Please choose your board size (5-9)" << endl;
	cin >> board_size;
	

	initialize(board, board_size, num);
	moving(board, board_size, num);
	
}
void moving(int board[], int board_size, int num) // moving marbles function
{
	int CboardP1, CboardP2, move, marbles_in_hand, x;
	char ch;
	do // loop
    {	CboardP1 = 0; CboardP2 =0;
    	DisplayBoard(board, board_size, num);
    	cout << "Do you want to save the game (S/s to save)" << endl; // asking if player wants to safe
    	cin >> ch;
    		if (ch == 'S' || ch == 's')
		{
			safefile(board, board_size, num);
		}
        //Player 1 and Player 2 interchange turn to play
        if (num % 2 != 0) //Player 1 is playing
        {
            DisplayBoard(board, board_size, num);
            cout<<"\n\nplayer 1 turn" << endl;
            	cout<<"Enter the hole you want to move : ";
                cin>>move;
                move--; //minus 1 to set it fit the array position
                if (move <= board_size - 1 && move >=0) //Ensure user choose a valid range
                {
                    if (board[move] > 0) //Ensure hole chosen is not empty
                    {
                        marbles_in_hand = board[move];
                        board[move] = 0; //hole that is chosen will be emptied
                        x = move + 1;
                        for( ; marbles_in_hand>0; marbles_in_hand--) //start adding marbles to each hole
                        {
                            if(x <= board_size*2) //end of array
                            {
                                if (marbles_in_hand == 1) //marble is left with 1
                                {
                                    board[x]++;
                                    if(board[x] > 1 && x != board_size) //if marble drop in hole that has marble,continue 
                                    {
                                        marbles_in_hand = board[x] + 1;
                                        board[x] = 0;
                                    }
                                    else if(x == board_size) //play again if player 1 drop last marble in storing hole
                                    {
                                        DisplayBoard(board, board_size, num);
                                        cout<<"Your last marbles rest in toring hole your turn again Player 1\n";
                                        system("pause");
                                        num--;
                                    }
                                    else if(board[x] == 1 && x != board_size)
                                    {
                                            //taking marbles from last hole and apposite hole and add into player 1's storing hole
										cout << endl;
										if(x == 0 && board[board_size*2] != 0)
										{
										cout << "Player 1 takes marbles from opponents hole: " << x+1<< endl;
											board[board_size] += board[board_size*2] + 1;
											board[board_size*2] = 0;
											board[x] = 0;
										}
										else if(x == 1 && board[board_size*2-1] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1 << endl;
											board[board_size] += board[board_size*2-1] + 1;
											board[board_size*2-1] = 0;
											board[x] = 0;
										}
										else if(x == 2 && board[board_size*2-2] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1 << endl;
											board[board_size] += board[board_size*2-2]+ 1;
											board[board_size*2-2] = 0;
											board[x] = 0;
										}
										else if(x == 3 && board[board_size*2-3] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1 << endl;
											board[board_size] += board[board_size*2-3]+ 1;
											board[board_size*2-3] = 0;
											board[x] = 0;
										}
										else if(x == 4 && board[board_size*2-4] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1 << endl;
											board[board_size] += board[board_size*2-4]+ 1;
											board[board_size*2-4] = 0;
											board[x] = 0;
										}
										else if(x == 5 && board[board_size*2-5] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1<< endl;
											board[board_size] += board[board_size*2-5]+ 1;
											board[board_size*2-5] = 0;
											board[x] = 0;
										}
										else if(x == 6 && board[board_size*2-6] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1<< endl;
											board[board_size] += board[board_size*2-6]+ 1;
											board[board_size*2-6] = 0;
											board[x] = 0;
										}
										else if(x == 7 && board[board_size*2-7] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1 << endl;
											board[board_size] += board[board_size*2-7]+ 1;
											board[board_size*2-7] = 0;
											board[x] = 0;
										}
										else if(x == 8 && board[board_size*2-8] != 0)
										{
											cout << "Player 1 takes marbles from opponents hole: " << x+1 << endl;
											board[board_size] += board[board_size*2-8]+ 1;
											board[board_size*2-8] = 0;
											board[x] = 0;
										}
                                    }
                                }
                                else //adding marble to holes
                                {
                                    board[x]++;
                                }
                                x++;
                            }
                            else //last hole position reached
                            {
                                x = 0; //restart the position
                                marbles_in_hand++;
                            }
                        }
                    }
                    else //hole chosen has no marbles
                    {
                        cout<<"\n\aThe hole is empty ! Please choose another hole ! \n";
                        system("pause");
                        num--;
                    }
                }
                else //hole chosen does not exist
                {
                    cout<<"\n\aThe hole is invalid ! Please choose another hole ! \n";
                    system("pause");
                    num--;
                }
        }
        else //Player 2 is playing
        {
            DisplayBoard(board, board_size, num);
            cout<<"\n\nplayer 2 turn" << endl;
                cout<<"Enter the hole you want to move : ";
                cin>>move;
                move = move + board_size; //make it correspond to the array
                if (move <= board_size*2 && move >= board_size) //Ensure the picked hole is in range
                {
                	if (board[move] > 0) //Ensure hole chosen is not empty
                    {
                        marbles_in_hand = board[move];
                        board[move] = 0;
                        x = move + 1;
                        for( ; marbles_in_hand>0; marbles_in_hand--) //hole that is chosen will be emptied
                        {
                            if(x == board_size)
                            {
                                x = 8;
                                marbles_in_hand++;
                            }
                            else if(x > board_size*2+1)
                            {
                                x = 0;
                                marbles_in_hand++;
                            }
                            else
                            {
                                if (marbles_in_hand == 1)
                                {
                                    board[x]++;
                                    if(board[x] > 1 && x != board_size*2+1)
                                    {
                                        marbles_in_hand = board[x] + 1;
                                        board[x] = 0;
                                    }
                                    else if(x == board_size*2+1)
                                    {
                                        DisplayBoard(board, board_size, num);
                                        cout<<"Your last marble lands in storing hole your turn again Player 2\n";
                                        system("pause");
                                        num--;
                                    }
                                    else if(board[x] == 1 && x != board_size*2+1)
                                    {
                                        //taking marbles from last hole and apposite hole and add into player 2's storing hole
										cout << endl;
										if(x == board_size*2 && board[0] != 0 )
										{									
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[0] + 1;
											board[0] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-1 && board[1] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[1]+ 1;
											board[1] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-2 && board[2] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[2]+ 1;
											board[2] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-3 && board[3] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[3]+ 1;
											board[3] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-4 && board[4] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[4]+ 1;
											board[4] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-5 && board[5] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[5]+ 1;
											board[5] = 0;
											board[x] = 0;
											}
										else if(x == board_size*2-6 && board[6] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[6]+ 1;
											board[6] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-7 && board[7] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[7]+ 1;
											board[7] = 0;
											board[x] = 0;
										}
										else if(x == board_size*2-8 && board[8] != 0)
										{
											cout << "Player 2 takes marbles from opponents hole: " << x-board_size << endl;
											board[board_size*2+1] += board[8]+ 1;
											board[8] = 0;
											board[x] = 0;
										}
                                    }
                                }
                                else
                                {
                                    board[x]++;
                                }
                                x++;
                            }
                        }
                    }
                    else //hole chosen has no marbles
                    {
                        cout<<"\nThe hole is empty ! Please choose another hole ! ";
                        system("pause");
                        num--;
                    }
                }
                else //hole chosen does not exist
                {
                    cout<<"\n\aThe input is invalid ! Please choose another hole ! \n";
                    system("pause");
                    num--;
                }
        }
        num++;
    for(int i = 0;i < board_size ;i++)
		{ //check if total of all holes is equal to 0
		CboardP1 += board[i];
		CboardP2 += board[i+board_size+1];
		}
	}while( CboardP1 != 0 || CboardP2 != 0 );
	endgame(board, board_size, num);
}
void endgame(int board[], int board_size, int num) // ending the game
{
	int totalP1, totalP2;
	for(int i = 0; i < board_size ; i++)
	{
		totalP1 += board[i];
		totalP2 += board[i + board_size+1];
		board[i] = 0;
		board[i + board_size+ 1] = 0;
	}
	board[board_size] = totalP1;
	board[board_size+1] = totalP2;
	system("pause");
	cout << "-----Final Result-----" << endl;
	system("pause");
	cout <<"Player 1 has " << totalP1 << " marbles"<< endl;
	system("pause");
	cout <<"Player 2 had " << totalP2 << " marbles" << endl;
	cout<<endl;
	cout << endl;
	system("pause");
	if(totalP1 > totalP2) // displaying winner
	{
		cout << "Player 1 is the Winner!!"<<endl;
		cout << "Here is a cookie!" << endl; // give winner cookie
	}
	else if(totalP2 > totalP1)
	{
		cout << "Player 2 is the Winner!!"<<endl;
		cout << "Here is a cookie!" << endl;
	}
	else if (totalP1==totalP2)
	{
		cout << "Draw! There is no winner this round" << endl;
	}
	cout << "We will load back to Welcome screen" << endl;
	system("pause");
	Welcome(board, board_size, num);
}

void safefile(int board[], int board_size, int num) // function to save file
{
	ofstream output, outputnum, outputsize; // save in 3 files to prevent disturbence
	output.open("SavedCongkak.txt"); 
	outputnum.open("CongkakPlayersTurn.txt");
	outputsize.open("CongkakSize.txt");
	for(int i = 0; i < board_size*2+2; i++){
		output << board[i] << " ";
	}
	outputnum << num;
	outputsize << board_size;
	output.close();
	outputnum.close();
	outputsize.close();
	cout << "Game is saved" << endl;
	system("pause");
	cout << "We will load back to Welcome screen" << endl;
	system("pause");
	Welcome(board, board_size, num);
}
void loadfile(int board[], int board_size, int num) // function to load file
{
	int i=0, integer;
	ifstream input, inputnum, inputsize; //load from file that are saved
	input.open("SavedCongkak.txt");
	inputnum.open("CongkakPlayersTurn.txt");
	inputsize.open("CongkakSize.txt");
	if(input.fail())
	{
		cout << "Game not exist" << endl;
		cout << "Loading back to Welcome screen" << endl;
		system("pause");
		Welcome(board, board_size, num);
	}
	while(!input.eof())
	{
		input >> integer;
		board[i] = integer;
		i++;
	}
	inputnum >> num;
	inputsize >> board_size;

	input.close();
	inputnum.close();
	inputsize.close();
	cout << endl;
	cout<< "The game is loaded, playing now"<< endl; // resume game
	system("pause");
	moving(board, board_size, num);
}
void Welcome(int board[], int board_size, int num) //Function to welcome
{
	char choice;
	cout << endl;
	cout << "~~~~~~ Welcome to Congkak Game ~~~~~" << endl;
	cout << "1. Play congkak" << endl;
	cout << "2. Rules and sypnopsis of congkak" << endl;
	cout << "3. Resume Game" << endl;
	cout << "4. Close game" << endl;
	cout << endl;
	cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice) //Player's choice
    {
        case '1':
            playgame( board, board_size, num); //start the game
            break;

        case '2':
                cout<<"+---------------------+"<<endl; //display rules
		    cout<<"| Rules and sypnopsis |"<<endl;
		    cout<<"+---------------------+"<<endl;
		    cout<<"Congkak is a traditional Malaysian board game for two players. The players score points by" <<endl;
			cout<<"playing their seeds. When the game ends, the player with the greatest number of seeds wins." <<endl;
			 cout<<"The congkak board is made up of two rows of seven playing holes each, where each player has" <<endl;
			 cout<<"a storing hole to the left side of the board. At the start of the game, each player gets 7 seeds in" <<endl;
			 cout<<"each playing hole, with the storing hole empty. One player will start the game and then alternates" <<endl;
			 cout<<"with the other player. The objective for each player is to put as many seeds as possible to his/her" <<endl;
			 cout<<"storing hole." <<endl;
			 cout<<"On his/her turn, the player picks up all the seeds from any one of the playing holes on his/her" <<endl;
			 cout<<"side. Moving clockwise and starting from the next hole, the player sows the seeds one at a time" <<endl;
			 cout<<"in successive holes until the seeds run out. Sowing skips the opponents store but does not skip" <<endl;
			 cout<<"a players own store." <<endl;
			 cout<<"If the last seed is sown in the players own storing hole, the player gets an immediate free turn." <<endl;
			 cout<<"The player can begin the turn at any one of the players seven playing holes." <<endl;
			 cout<<"If the last seed is sown in an empty playing hole on the opponent side, the turn ends, and it is the" <<endl;
			 cout<<"opponents turn to start the next move." <<endl;
			 cout<<"If the empty playing hole is on own side, the last seed, plus all the seeds in the opponents hole" <<endl;
			 cout<<"across from the last hole are removed and added to players storage hole." <<endl;
			 cout<<"If the last seed is sown into an occupied hole, the player removes all the seeds from that hole," <<endl;
			 cout<<"and continues sowing them clockwise starting from the next hole. The process continues until" <<endl;
			 cout<<"the last seed is sown into an empty hole." <<endl;
			 cout<<"The game ends when a player has no seeds in any of his/her playing holes. The first player to" <<endl;
			 cout<<"have no seeds to play loses the game. The other player adds the remaining seeds on his/her side" <<endl;
			 cout<<"to his/her storing hole."<< endl;
			 cout << endl;
	    	system("pause");
            Welcome( board, board_size, num);
            break;
        
        case '3':
			loadfile(board, board_size, num); // call to load file
        	break;

        case '4':
        	cout<<"Shutting Down......"; // shut down program
		exit(0);
            break; 

        default:
            cout<<"\n\t\t*invalid input*\n\a"; //wrong input reenter.
            Welcome( board, board_size, num);
            break;
    }
}

void DisplayBoard(int board[], int board_size, int num)//Function to display board 
{
	int i;
	cout << endl;
	cout << "-------CURRENT MATCH------" << endl;
	cout << endl;
	cout << " Player 1"  << endl;;
	cout << endl;
	for( i = 0 ; i < board_size ; i++){
		cout << "\t" << "  " << i+1 << " " ; 
	}
	cout << endl;
	cout << endl;
	for(i = 0; i < board_size; i++){
		cout << "\t" << "( " << board[i] << " )";
	}
	cout << endl;
	if(board_size == 5)
		cout << "( " << board[board_size*2+1]  << " )" << " " << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << board[board_size] << " )" << " " << endl; 
	if(board_size == 6)
		cout << "( " << board[board_size*2+1] << " )" << " " << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << board[board_size] << " )" << " " << endl; 
	if(board_size == 7)
		cout << "( " << board[board_size*2+1]  << " )" << " " << "\t" << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << board[board_size] << " )" << " " << endl; 
	if(board_size == 8)
		cout << "( " << board[board_size*2+1]  << " )" << " " << "\t" << "\t" << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << board[board_size] << " )" << " " << endl; 
	if(board_size == 9)
		cout << "( " << board[board_size*2+1]  << " )" << " " << "\t" << "\t" << "\t" << "\t" << "\t" << "\t"  << "\t" << "\t" << "\t" << "\t" <<"( " << board[board_size] << " )" << " " << endl; 
	for( i = board_size*2 ; i > board_size ; i--){
		cout << "\t" << "( " << board[i] << " )" ; 
	}
	cout << endl;
	cout << endl;
	for( i = board_size -1 ; i >= 0 ; i--){
		cout << "\t" << "  " << i+1 << " " ; 
	}
	cout << endl;
	cout << endl;
	cout << " Player 2"<< endl;;
	cout << endl;
	cout << endl;
	return;
}
void initialize(int board[], int board_size, int num) //Function to initialize board
{
	if(board_size < 5 || board_size > 9){
		cout << "Invalid input" << endl;
		playgame(board, board_size, num);
	}
	else{ //initialize the number of marbles in each holes.
		for(int i = 0; i < board_size; i++ ){        
			board[i] = board_size;
		}
		for(int i = board_size + 1 ; i < board_size*2 + 1 ; i++)
		{
			board[i] = board_size;
		}
		board[board_size] = 0;
		board[board_size*2+1] = 0;
		
	}
}
