//dynamic memory management
#include<iostream>
using namespace std;

int main()
{
    int *numptr=new int;
    int *numptr1=new int;
    *numptr=42;
    *numptr1=35;
    
    cout<<"values"<<*numptr<<endl;
    cout<<"values"<<*numptr1<<endl;
   
     delete numptr1;
    
    *numptr1=55;
    cout<<"values"<<*numptr1<<endl;
    return 0;
}