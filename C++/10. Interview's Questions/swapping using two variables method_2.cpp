//write a program to swap two numbers using two variables only.
//second method.


#include"iostream"
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two integers:"<<endl;
	cin>>a>>b;
    cout<<"Before Swapping:"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    
    a=a*b;
    b=a/b;
    a=a/b;
    
	cout<<"After Swapping:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b;
		
	return 0;
}
