/*
Unions:
   Unions are similiar to structures in certain aspects.Unions are used to group together variables of different data types.the difference between
   structure and union is in the allocation of memory space.A structure allocates total space required for a structure variable.However, a union 
   allocates the space required by one element that occupies the maximum size.
   Suppose a union consists of three variables of different types.The union will allocate space only to the variable that requires the maximum memory
   space.It means that only one element will have a valid value at any time.
*/
//to understand unions see the example below:

#include"iostream"
using namespace std;

union employee//a union is declared with a keyword union.
{
	long salary;
	char grade;
};

int main()
{ 
  employee e;
  cout<<"Enter Salary:";
  cin>>e.salary;
  cout<<"Salary is:"<<e.salary<<endl;//we do this because only one element will have valid value if we don't output like this then it will show garbage value.
  cout<<"Enter Grade:";
  cin>>e.grade;
  cout<<"Grade is:"<<e.grade<<endl;
return 0;
}
/*
if we do the above procedure like this then it shows the garbage value. see how?
 employee e;
  cout<<"Enter Salary:";
  cin>>e.salary;
  cout<<"Enter Grade:";
  cin>>e.grade;
  cout<<"Salary is:"<<e.salary<<endl;
  cout<<"Grade is:"<<e.grade<<endl;
return 0;
*/