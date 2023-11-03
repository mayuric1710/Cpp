//WAP to convert Fahrenheit into Celsius using class.
#include<iostream>
using namespace std;

class temp{
           
         public:
        
            float f;
            
            void getdata(){
            
                cout << "Enter the temperature in Fahrenheit::";
                cin >> f;
            }
            
            void putdata(){
            
                float c;
            
                c = (f - 32) * 5/9;
                
                cout << "Celsius::" << c;
            }
            
};

int main()
{
    cout << "Janvi K chavda";
    cout << "220130318090";
    temp c;
    c.getdata();
    c.putdata();
    
    return 0;
}