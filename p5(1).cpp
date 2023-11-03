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
        
   cout << "Mayuri R. Chavda"<<endl;
    cout << "220130318091"<<endl;   
    childObj.display();
    childObj.show();

    return 0;
}
