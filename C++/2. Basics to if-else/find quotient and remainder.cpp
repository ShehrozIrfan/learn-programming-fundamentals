// this program is to find the quotient and remainder.
#include<iostream>
using namespace std;
int main()
{
    int dividend,divisor,quotient,remainder;
    // variables can also be declared by this method instead of declaring them one by one.
    cout<<"enter dividend";
    cin>>dividend;
    cout<<"enter divisor";
    cin>>divisor;
    quotient=dividend/divisor;
    // formula for finding quotient.
    // this ' / ' is used to divide a number by another number.this is arithmetic operator.
    remainder=dividend%divisor;
    // formula for finding remainder.
    // this ' % ' is used to find remainder.this is also arithmetic operator.
    cout<<"quotient ="<<quotient<<endl;
    cout<<"remainder="<<remainder<<endl;
    system("pause");
}
