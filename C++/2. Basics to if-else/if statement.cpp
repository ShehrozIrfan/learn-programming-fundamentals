// now we are starting with if statement.
/* syntax for if statement is
if(condition)
{
statements             
}
*/
// this is a program to check a statement. 
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the age";
    cin>>x;
    if(x>20)
    // this' > ' is a relational operator.so here it means x is greater than 20.
    {
    cout<<"you are elder"<<endl;        
    }
    system("pause");
}
