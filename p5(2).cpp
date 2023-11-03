#include <iostream>

using namespace std;

class Grandparent {
public:
    void displayGrandparent() {
        cout << "This is the Grandparent class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void displayParent() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child childObj;
    cout << "Mayuri R. Chavda"<<endl;
        cout << "220130318091"<<endl;  
    childObj.displayGrandparent();
    childObj.displayParent();
    childObj.displayChild();

    return 0;
}
