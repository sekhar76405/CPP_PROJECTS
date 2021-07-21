#include<iostream>
using namespace std;

// checking when the game is over
bool IsGameOver(char *arr){
	if(arr[0] == arr[1] == arr[2])
		return true;
	else if(arr[3] == arr[4] == arr[5])
		return true;
	else if(arr[6] == arr[7] == arr[8])
		return true;
	else if(arr[0] == arr[3] == arr[6])
		return true;
	else if(arr[1] == arr[4] == arr[7])
		return true;
	else if(arr[2] == arr[5] == arr[8])
		return true;
	else if(arr[6] == arr[4] == arr[2])
		return true;
	else if(arr[0] == arr[4] == arr[8])
		return true;
	else
		return false;
}

// To check if the Players have picked the right box to input or not.
//(if it is filed already or not)

bool IsPlayerInputValid(int input,char *arr){
	if(arr[input] == 'X' || arr[input] == 'O')
		return false;
	else
		return true;
}

//display function
void display_grid(char *arr){
	cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[0]<<"  |  "<<arr[1]<<"  |  "<<arr[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[3]<<"  |  "<<arr[4]<<"  |  "<<arr[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[6]<<"  |  "<<arr[7]<<"  |  "<<arr[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
}

int main(){

	char arr[9] = {'~','!','@','#','$','%','^','&','*'};
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

    	if(!IsPlayerInputValid(input,arr)){
    		cout<<"Invalid Input. That box is filled.\n";
    		goto PLAYER_1_INPUTS;
    	}
    	else{
    		arr[input] = p1_choosed;
    	}

    	display_grid(arr);

    	if(IsGameOver(arr)){
    		cout<<"Congratulations Player 1.\n You WON the Game !\n";
    		break;
    	}
    	
    }

	return 0;
}



	