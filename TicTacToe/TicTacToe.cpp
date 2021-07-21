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
    cout<<"     |     |     "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"     |     |     "<<endl;



	return 0;
}



	cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[0]<<"  |  "<<arr[1]<<"  |  "<<arr[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[3]<<"  |  "<<arr[4]<<"  |  "<<arr[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[6]<<"  |  "<<arr[7]<<"  |  "<<arr[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;