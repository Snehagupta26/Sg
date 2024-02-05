#include<iostream>
//2 types of header files
// system header files : comes with compiler 
// #include<iostream>
// user defined header files: written by programmer
// #include "this.h"...will produce an error if it is noot available in current directory
// c++ standard libarary header
using namespace std;
int main(){
    cout<<"hi sneha"<<endl;
    int a = 5, b = 7;
    cout<<"arithmetic operators : "<<endl;
    cout<<a + b<<endl;//12
    cout<< a - b<<endl;//-2
    cout<< a*b<<endl;//35
    cout<<a/b<<endl;//0
    cout<<a % b<<endl;//5
    cout<<a++<<endl;//pehle a print yahi 5 then a ko badao mtlb ab a 6 hai pr print 5 hi hoga
    cout<<a--<<endl;//ab pehle a print kro fir a ko minus krdo...peeche a 6 hua so yha 6 pr ab a 5 hai
    cout<<++a<<endl;//a ko badake print kro like peche 5 hogya to ab 6 print
    cout<<--a<<endl;//a ko kam krke print kro means 5
    // cout<<"arithmetic operators : "<<endl;
    // int a = 5;
    // char f = 'd';

    cout<<"comparison operators : "<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;

    cout<<"logical operators : "<<endl;
    cout<<((a==b) && (a>b))<<endl;
    cout<<((a==b) || (a>b))<<endl;
    cout<<(!(a==b));

    return 0;
}
