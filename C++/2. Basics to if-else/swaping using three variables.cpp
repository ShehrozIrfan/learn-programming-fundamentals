// this program is to swap two numbers by using three variables.
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    /* here we declare three variables in which 'temp' is assigned to 'a',
    and the value of 'a' is assigned to 'b', and the value of 'b' is assigned to 'temp'. */
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"before swaping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    system("pause");
 
}
