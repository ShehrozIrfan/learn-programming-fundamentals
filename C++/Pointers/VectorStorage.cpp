#include <iostream>

using namespace std;

int main(){
    //Example 1
    int v[5] = {1,2,3,4,5};
    int * ptrv = &v[0];
    for(int i = 0; i < 5; i++){
        cout << *(ptrv+i) << " ";
    }
    cout << endl;

    //Example 2 
    for(int * ptrit = v; ptrit < v+5; ptrit++){
        cout << *ptrit << " ";
    }
    cout << endl;

    //Difference between a memory position and the following 
    cout << ptrv << " " << ptrv+1 << endl;

    //Example 3
    ptrv = &v[1];
    int * ptrv2 = &v[3];
    if(ptrv < ptrv2){
        cout << "ptrv points to an index before ptrv2" << endl;
    }else{
        cout << "ptrv points to an index after ptrv2" << endl;
    }

    //Example 4
    int * ptrx;
    int * ptry;
    ptrx = &v[1];
    ptry = &v[4];
    cout << v[(ptry - ptrx)] << endl;
}