/*Write a C++ program to create class Distance with private
 data 
member’s feet & inches. Member function are
 get_distance() & 
display_distance(). Call both member
 functions using object of the class.*/

#include<iostream>
using namespace std;

class dis
{
    private:
    int feet,inches;
    public:
    void get_distance(){
        
        cout<<"enter the value of feet:";
        cin>>feet;
        cout<<"enter the value of inches:";
        cin>>inches;
    }
    void display_distance(){
    
        cout<<"distance: feet = "<<feet<<"  inches = "<<inches;
        
    }

};

int main()
{
    cout << "Pari M. Chudasama"<<endl;
    cout << "220130318002"<<endl;
    dis d1;
    d1.get_distance();
    d1.display_distance();