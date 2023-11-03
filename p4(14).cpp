#include <iostream>

using namespace std;

class MyObject {
private:
    int data;

public:
    MyObject(int value) : data(value) {}

    ~MyObject() {
        cout << "Object with data " << data << " is being destroyed." << endl;
    }
};

int main() {
    
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;  
    MyObject obj1(42);
    MyObject obj2(66);

    return 0;
}
