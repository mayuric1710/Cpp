//Write C++ Program to Find Largest Among 3 Numbers.
#include<iostream>
using namespace std;

int main()
{
    int no1,no2,no3;
    
    cout << "Janvi K.chavda"<<endl;
    cout << "220130318090"<<endl;
    
    cout<<"enter no1::";
    cin >>no1;
    cout<<"enter no2::";
    cin >>no2;
    cout<<"enter no3::";
    cin >>no3;
    
    if(no1>no2){
    
        if(no1>no3){
           
             cout<<"no1 is greater";
            
        }
        else{
        
            cout<<"no3 is greater";
        
        }
    }
    
    else{
        if(no2>no3){
        
            cout<<"no2 is greater";
        
        }
        else{
        
            cout<<"no3 is greater";
        
        }
    }

}