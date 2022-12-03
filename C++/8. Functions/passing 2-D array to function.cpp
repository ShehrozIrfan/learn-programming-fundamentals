/*
Passing Two-Dimensional Array to Function:
        A two dimensional array can be passed to a function in same way as one-dimensional array.The two-dimensional array is also passed to a function
        by reference.The specification of first dimension is not necessory.However, the second dimension is always required.
        void fun(int n[][]);   //Error.The second dimension is required.
        void square(int n[][3]); //Ok.
        void square(int n[3][2]; //Ok.
*/
/*
write a program that inputs valus in a two-dimensional array with three rows and two columns.The program passes the array to a function.The function
returns the maximum value in the array.
*/

#include"iostream"
using namespace std;

int max(int arr[3][2]);

int main()
{
	int n[3][2];
	int maximum;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter value for num["<<i<<"]["<<j<<"]:";
			cin>>n[i][j];
		}
	}
	maximum=max(n);
	cout<<"Maximum value is:"<<maximum<<endl;
	
	return 0;
}
int max(int arr[3][2])
{
	int m;
	m=arr[0][0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(arr[i][j]>m)
			m=arr[i][j];
		}
	}
	
	return m;
}