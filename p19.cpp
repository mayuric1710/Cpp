//Write C++ Program to Make a Simple Calculator with the use of switch case.
#include <iostream>
using namespace std;

int main() {
    char cal;
    int num1, num2;
    
    cout << "Janvi k.chavda"<<endl;
    cout << "220130318090"<<endl;
    cout << "Enter an operator [+, -, *, /]: ";
    cin >> cal;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (cal) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; 
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}