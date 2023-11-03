
Write C++ Program to Check Armstrong Numberusing function.

#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int number;
    cout<<"Mayuri R. chavda";
    cout<<"220130318091";
    cout << "Enter a number: ";
    cin >> number;
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
