//Write C++ program to find simple interest.
#include<iostream> 
using namespace std;

int main ()
{
    int p,r,t,SI;
    
    cout << "Mayuri R.Chavda"<<endl;
    cout << "220130318091"<<endl;
    
    cout <<"enter the principal::";
    cin  >> p;
    cout << "enter the rate::";
    cin  >> r;
    cout << "enter the time::";
    cin  >> t;
    
    SI=(p*r*t)/100;
    
    cout<<"simple interest is ::"<<SI;
}    
      
