#include <iostream>

using namespace std;
class FriendClass;

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    
    friend class FriendClass;
};
class FriendClass {
public:
    void accessPrivateData(MyClass obj) {
     cout << "Friend class can access private data: " << obj.data <<endl;
    }
};

int main() {
    MyClass myObj(42);
    FriendClass friendObj;
    cout << "Janvi k. Chavda" << endl;
    cout << "220130318090" << endl;
    
    friendObj.accessPrivateData(myObj);

    return 0;
}
