#include <iostream>

using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Constructor of Base1 class" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Constructor of Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Constructor of Derived class" << endl;
    }
};

int main() {
     
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;
    Derived derivedObj;

    return 0;
}
