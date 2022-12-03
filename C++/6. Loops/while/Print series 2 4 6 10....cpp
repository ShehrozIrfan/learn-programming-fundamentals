//write a program to print the following series:
// 2  4  6  10  16  26  42  68  110  178  288

#include<iostream>
using namespace std;

int main(){
	int n1=2;
	
	int n2=4;
	
	int sum=0;
	
	cout<<n1<<"  "<<n2<<"  ";
	
	while(sum!=288){
	
		sum=n1+n2;
	
		n1=n2;
	
		n2=sum;
	
		cout<<sum<<"  ";
		
	}
	
	cout<<endl;
	
	return 0;
}
