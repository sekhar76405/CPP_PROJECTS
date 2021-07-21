#include<iostream>
using namespace std;

// checking when the game is over
bool IsGameOver(char *grid){
	if(grid[0] == grid[1] && grid[1] == grid[2])
		return true;
	else if(grid[3] == grid[4] && grid[4]  == grid[5])
		return true;
	else if(grid[6] == grid[7] && grid[7] == grid[8])
		return true;
	else if(grid[0] == grid[3] && grid[3] == grid[6])
		return true;
	else if(grid[1] == grid[4] && grid[4] == grid[7])
		return true;
	else if(grid[2] == grid[5] && grid[5] == grid[8])
		return true;
	else if(grid[6] == grid[4] && grid[4] == grid[2])
		return true;
	else if(grid[0] == grid[4] && grid[4] == grid[8])
		return true;
	else
		return false;
}

// To check if the Players have picked the right box to input or not.
//(if it is filed already or not)

bool IsPlayerInputValid(int input,char *grid){
	if(grid[input] == 'X' || grid[input] == 'O')
		return false;
	else
		return true;
}

//display function
void display_grid(char *grid){
	cout<<"     |     |     "<<endl;
    cout<<"  "<<grid[0]<<"  |  "<<grid[1]<<"  |  "<<grid[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<grid[3]<<"  |  "<<grid[4]<<"  |  "<<grid[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<grid[6]<<"  |  "<<grid[7]<<"  |  "<<grid[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
}

int main(){

	char grid[9] = {'~','!','@','#','$','%','^','&','*'};
	
	char p1_choosed, p2_choosed;
	cout<<"Hello player 1 choose between 'X' and 'O' : ";
	cin>>p1_choosed;
	
	if(p1_choosed == 'X' || p1_choosed == 'x')
	{
	    p1_choosed = 'X';
	    p2_choosed = 'O';
	}
	else
	{
	    p1_choosed = 'O';
	    p2_choosed = 'X';
	}

	cout<<"Awesome ! \n P1 : "<<p1_choosed<<"\n P2 : "<<p2_choosed<<"\n Lets Start ! "<<endl;
	cout<<"     |     |     "<<endl;
    cout<<"  1  |  2  |  3  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  4  |  5  |  6  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  7  |  8  |  9  "<<endl;
    cout<<"     |     |     "<<endl;

    while(true){

    PLAYER_1_INPUTS:
    	int input;
    	cout<<"Its P1's turn. Input the Box Number: ";
    	cin>>input;
    	input--;

    	if(!IsPlayerInputValid(input,grid)){
    		cout<<"Invalid Input. That box is filled.\n";
    		goto PLAYER_1_INPUTS;
    	}
    	else{
    		grid[input] = p1_choosed;
    	}

    	display_grid(grid);

    	if(IsGameOver(grid)){
    		cout<<"Congratulations Player 1.\n You WON the Game !\n";
    		break;
    	}
    	
    }

	return 0;
}



	