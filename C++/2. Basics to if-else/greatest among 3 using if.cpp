// this is a program to find greatest among three numbers using if statements.
#include<iostream>
using namespace std;
int main()
{
 float n1,n2,n3;
 // Float is a data type. It is used for decimal numbers/real numbers. It is also used for both integers and decimals numbers.
 cout<<"enter three numbers"<<endl;
 cin>>n1>>n2>>n3;
 if(n1>n2 && n1>n3)
 {
 cout<<"n1 is greater"<<endl<<n1<<endl;
          }   
 if(n2>n1 && n2>n3)
 {
 cout<<"n2 is greater"<<endl<<n2<<endl;
          }
 if(n3>n1 && n3>n2)
 {
 cout<<"n3 is greater"<<endl<<n3<<endl;
          }
 system("pause");
}
