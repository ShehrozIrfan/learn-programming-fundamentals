// this program is to swap two numbers without using third variable or by using two variables.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    // we declare two variables.
    cout<<"Enter first value"<<endl;
    cin>>a;
    cout<<"Enter second value"<<endl;
    cin>>b;
    cout<<"before swaping"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    a=a+b;
    // let a=10 and b=5 then a=a+b implies that a=10+5 which implies that a=15.
    b=a-b;
    // b=a-b implies that b=15-5 which implies that b=10. because the value of a is now 15 by a=a+b. which is done in upper comment. 
    a=a-b;
    // a=a-b implies that a=15-10 which implies that a=5. because the value of b is now 10 by b=a-b. which is done in upper comment.
    cout<<"after swaping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    system("pause");
}
