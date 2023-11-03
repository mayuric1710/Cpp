/Write a C++ program to demonstrate use of Static Member Function
#include <iostream>
using namespace std;

class increament{
    private:
        static int no1;
  
    public:
        
        static void addingup()
        {
            no1++;    
        }
        static void display()
        {
            cout<<"increamented value::"<<no1;
        }
}; 
int increament :: no1=5;

int main()
{
	cout<<"Janvi k. chavda"<<endl;
	cout<<"220130318090"<<endl;
    increament i1;
    increament :: addingup();
    increament :: addingup();
    increament :: addingup();
    i1.display();
}