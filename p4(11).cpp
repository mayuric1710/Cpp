#include <iostream>

using namespace std;
class MyClass {
private:
    int data;

public:
    
    MyClass(int value) {
        data = value;
    }

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    int value = 42;

    cout << "Mayuri R. Chavda"<<endl;
    cout << "220130318091"<<endl;
    
    MyClass myObj(value);

    myObj.displayData();

    return 0;
}
