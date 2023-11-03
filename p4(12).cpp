#include <iostream>

using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    
    MyString(const MyString& other) {
        int length = strlen(other.str);
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    void displayString() {
        cout << "String: " << str << endl;
    }
    
};

int main() {
    const char* str = "Hello, World";

        MyString s1(str);

        MyString s2(str);
    cout << "Janvi K.Chavda" << endl; 
    cout << "220130318090" << endl;   
    s1.displayString();
    s2.displayString();

    return 0;
}
