#include<iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;


int main()
{
	int hours = 0, mins = 0, secs = 0;
    cout<<" Time is the wisest counselor of all. \n";
	while(true)
	{
	    system("clear");
		cout<<hours<<" hrs : "<<mins<<" mins : "<<secs<<" secs "<<endl;
		sleep(1);
		secs++;
		if(secs==60){
			secs = 0;
			mins++;
			if(mins == 60){
				mins = 0;
				hours++;
				if(hours == 24){
					hours = 0;
				}
			}
		}
	}

	return 0;
}