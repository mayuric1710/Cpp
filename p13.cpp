//Write C++ Program to Calculate Sum of First n Natural Numbersusing function
#include<iostream>
using namespace std;

int main()
{
    int I,start=1,end,sum=0;
    
    cout << "Janvi k.chavda"<<endl;
    cout << "220130318090"<<endl;
    
    cout<<"enter till which no. you want sum::";
    cin >>end;
    
    for(I=start;I<=end;I++)
    {
        sum=sum+I;
    }
    cout<<"sum:"<<sum;

}