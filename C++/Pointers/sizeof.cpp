#include<iostream>

using namespace std;

int main(){
    int a=5; bool b=true;  float c = 34.5;
    double d=43.23; char e = 'a';
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;

    int *entero = &a;
    bool* boolean = &b;
    float * flotante = &c;
    double * doble = &d;
    char * caracter = &e;

    cout << sizeof(entero) << endl;
    cout << sizeof(boolean) << endl;
    cout << sizeof(flotante) << endl;
    cout << sizeof(doble) << endl;
    cout << sizeof(caracter) << endl;

}
