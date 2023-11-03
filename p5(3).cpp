#include <iostream>

using namespace std;

class Base1 {
public:
    void displayBase1() {
        cout << "This is the Base1 class." << endl;
    }
};

class Base2 {
public:
    void displayBase2() {
        cout << "This is the Base2 class." << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Derived derivedObj;
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;
    derivedObj.displayBase1();
    derivedObj.displayBase2();
    derivedObj.displayDerived();

    return 0;
}
