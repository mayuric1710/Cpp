//Write C++ program to find compound interest.
#include<iostream>
using namespace std;

int main()
{
    int p,r,t,CI;
    
    cout << "Janvi K.chavda"<<endl;
    cout << "220130318090"<<endl;

    cout<<"enter the principal::";
    cin >>p;
    cout<<"enter the principal::";
    cin >>r;
    cout<<"enter the principal::";
    cin >>t;
   
    CI=(p*pow(1+r/100,t))-p;
    
    cout<<"compound"<<CI;
     
    return 0;
}