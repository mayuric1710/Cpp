#include <iostream>
using namespace std;
class MyClass {
private:
    int data;

public:
    
    MyClass() {
        data =90 ;
    }

    void displayData() {
        cout << "Data: " << data << std::endl;
    }
};

int main() {
    
    MyClass myObj;
    cout << "Mayuri R. Chavda"<<endl;
    cout << "220130318091"<<endl;
    
    myObj.displayData();

    return 0;
}
