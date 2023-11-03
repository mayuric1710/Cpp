#include <iostream>

using namespace std;

class Base {
public:
    void display() {
        cout << "This is the Base class." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;
    cout << "Mayuri R. Chavda"<<endl;
        cout << "220130318091"<<endl;

    Base* ptr = &baseObj;
    ptr->display();

    ptr = &derivedObj;
    ptr->display();

    return 0;
}
