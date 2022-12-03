/*
Passing Individual Array Element to Function:
        An individual element of array can also be passed to function.The data type of array and the data type of function parameter must be same.The
        individual element is passed to a function like a simple variable.Suppose a function is defined to accept an integer parameter.It can accept
        an indiviadual element of an integer array in same way as it can accept a simple integer variable.
*/
/*
write a program that inputs five integers in an array.It passes all elements of the array to a function one by one.The function displays the actual
value of the element and its square.
*/

#include"iostream"
using namespace std;

void square(int n);

int main()
{
	int arr[5];
	cout<<"Enter five integers:"<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	
	cout<<"The square of the numbers:"<<endl;
	for(int i=0;i<5;i++)
	square(arr[i]);
	return 0;
}

void square(int n)
{
	cout<<n<<"\t"<<n*n<<endl;
}