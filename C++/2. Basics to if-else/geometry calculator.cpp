/*
Geometry Calculator.
1-Calculate Area of circle.
2-Calculate Area of rectangle.
3-Calculate Area of triangle.
4-Quit.
Program do not accept negative values for radius,height,width,base and length.
*/

#include"iostream"
using namespace std;
int main()
{
	int choice;
	
	cout<<"Geometry Calculator.\n";
	cout<<"1-Calculate Area of Circle.\n";
	cout<<"2-Calculate Area of Rectangle.\n";
	cout<<"3-Calculate Area of Triangle.\n";
	cout<<"4-Quit.\n\n";
	cout<<"Enter your choice from 1 to 4\n";
	cin>>choice;
	
	if(choice>=1 && choice<=4)
	{
		if(choice==1)
		{   float rad;
		    float areaOfCircle;
		    cout<<"You want to calculate the Area of Circle.\n";
			cout<<"Please Enter Radius of Circle.\n";
			cin>>rad;
			if(rad>0)
			{
				areaOfCircle=3.14*rad*rad;
				
				cout<<"Area Of Circle ="<<areaOfCircle;
			}
			else
			cout<<"It didn't accept negative value for radius.\nYou muast have to enter positive value!\n";
		}
		else if(choice==2)
		{
			float length,width;
			float areaOfRect;
			cout<<"You want to calculate the Area of Rectangle.\n";
			cout<<"Please Enter Length Of Rectangle.\n";
			cin>>length;
			cout<<"Please Enter Width of Rectangle.\n";
			cin>>width;
			if(length>0 && width>0)
			{
				areaOfRect=length*width;
				
				cout<<"Area Of Rectangle ="<<areaOfRect;
			}
			else
			cout<<"It didn't accept negative values for length and width.\nYou must have to enter positive values!\n";
		}
		else if(choice==3)
		{
			float base,height;
			float areaOfTriangle;
			cout<<"You want to calculate the Area of Triangle.\n";
			cout<<"Please Enter Base of Triangle\n";
			cin>>base;
			cout<<"Please Enter Height of triangle\n";
			cin>>height;
			if(base>0 && height>0)
			{
				areaOfTriangle=base*height*0.5;
				
				cout<<"Area Of Triangle ="<<areaOfTriangle;
			}
			else
			cout<<"It didn't accept negative values for base and height.\nYou must have to enter positive values!\n";
		}
		else
	    return 0;
		
	}
	else
	{
		cout<<"Error.\n";
		cout<<"Invalid Input!!\n";
	}
	
	
	return 0;
}