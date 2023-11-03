#include <iostream>

using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child childObj;
        
    cout<< "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;  
    childObj.display();
    childObj.show();

    return 0;
}
