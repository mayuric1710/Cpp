#include <iostream>

using namespace std;

class MyClass {
public:
    int data;

    MyClass(int data) {
        this->data = data;
    }

    void display() {
        cout << "Data: " << this->data << endl;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(77);
    
    cout << "Mayuri R. Chavda"<<endl;
        cout << "220130318091"<<endl;

    obj1.display();
    obj2.display();

    return 0;
}
