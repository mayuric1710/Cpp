#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int num) : value(num) {}

  
    friend int addNumbers(Number num1, Number num2);
};


int addNumbers(Number num1, Number num2) {
    return num1.value + num2.value;
}

int main() {
    Number number1(5);
    Number number2(7);

    int sum = addNumbers(number1, number2);
    cout << "Janvi k. Chavda" << endl;
    cout << "220130318090" << endl;
    
    cout << "The sum of :: " << sum << endl;

    return 0;
}
