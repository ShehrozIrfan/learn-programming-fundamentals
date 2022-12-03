#include<iostream>

using namespace std;

int main()

{
     char guess;
     int tryNum=1;
     
     cout<<"	Its a Guess Game.\n\n\nI have a character for you that is between A to Z.\nYou have to Guess that Character.\nYou will be given three chances.\n ";
     
     cout<<"\n\n\n	   LET'S  PLAY\n\n\n";
     
     
     do
     {
     	cout<<"PLease Enter your Guess by pressing a Character from A to Z.\n";
     	cin>>guess;
     	
     	
     	if(guess=='U' || guess=='u' || guess=='S' || guess=='s' || guess=='C' || guess=='c' )
     	{
     	
		 cout<<"\n\n\n\n 		CONGRATULATIONS !!!   \n\n\n";
		 
		 cout<<"	You Guess the right Character	\n\n\n\n	";
		 
		 	tryNum=4;
		}
		
		else
		{
			
			cout<<"\n\n	 Wrong Guess! \n\n ";
			
			tryNum+=1;
			
		}
		
	
     	
	 }

		while(tryNum<=3);
	
	
	return 0;
}