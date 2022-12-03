//program that inputs five digit number from the user and reverse the number.

#include<iostream>

using namespace std;

int main()

{
  int number,a,b,c,d;
  
  cout<<"Enter a five digit number\n";
  cin>>number;
  
  a=number/10000;
  //let user enters a number that is 12345 when 12345/10000 we get 1.2345 but only 1 is stored in 'a' and decimal part is truncated in C++.
  number=number%10000;
  //when 12345%1000 we get the remainder 2345 so now number=2345
  
  b=number/1000;
  //now when 2345/1000 we get 2.345 but only 2 is stored in 'b' and decimal part is truncated.Because C++ truncated decimal points.
  number=number%1000;
  //now when 2345%1000 we get remainder 345 so now number=345
  
  c=number/100;
  //now when 345/100 we get 3.45 but only 3 is stored in 'c' and decimal part is truncated.
  number=number%100;
  //now when 345%100 we get remainder 45 so now number=45.
  
  d=number/10;
  //now when 45/10 we get 4.5 but only 4 is stored in 'd' and decimal part is truncated.
  number=number%10;
  //now when 45%10 we get remainder 5 so now number=5.
  
  cout<<"Number in reverse order is\n"<<number<<d<<c<<b<<a<<endl;
  //here we first display the 'number' then 'd' then 'c' then 'b' and then 'a'.
  // Congratulations the number is reversed now.
  
  system("pause");
    
}
