#include <iostream>

using namespace std;

class MyObject {


public:
    
    void displayData(){
        cout <<"constructer is called "<< endl;
    }

    ~MyObject() {
        cout << "Destructor called. "  << endl;
    }
};

int main() {
    MyObject obj1;
    
        cout << "Mayuri R. Chavda"<<endl;
        cout << "220130318091"<<endl;
    obj1.displayData();
    

    return 0;
}
