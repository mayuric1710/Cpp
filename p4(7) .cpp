#include <iostream>
using namespace std;
class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}
    friend void friendFunction(MyClass obj);
};

void friendFunction(MyClass obj) {
    cout << "Friend function can access private data: " << obj.data <<endl;
}

int main() {
    MyClass myObj(42);
    cout << "Mayuri R. Chavda"<<endl;
        cout << "220130318091"<<endl;
    friendFunction(myObj);

    return 0;
}
