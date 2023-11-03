#include<iostream> 
using namespace std;
class temp{

    public:
        static int a;
        
        void display (){
            cout<<"value of a is ::"<<a;
        
        }
};
int temp ::a=10;

int main()
{
    cout << "Mayuri R. Chavda"<<endl;
    cout << "220130318091"<<endl;
    temp t1;
    t1.display();
    return 0; 
}
