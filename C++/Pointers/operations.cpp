#include<iostream>

using namespace std;
int main(){
    //Assignment of pointer to variable
    int * puntero;
    int y = 5;
    puntero = &y;
    cout << "valor of puntero:" << *puntero << endl ;

    //What happens if we do not assign anything to the pointer?
    int * ptr;
    cout << *ptr << endl;
    //Nothing 

    /*
    float * ptr2=0; //Why would it give error?
    cout << *ptr2;
    */

    //Handling a value from a pointer
    float *ptrx, x=5.4;
    cout << "The old value of x is:" << endl;
    cout << x << endl;
    ptrx = &x;
    *ptrx = 8.2;
    cout << "The new value of x is:" << endl;
    cout << *ptrx << " " << x << endl;
    cout << "The old value of x is (put in input):" << endl;
    cin >> *ptrx;
    cout << *ptrx << " " << x << endl;
}
