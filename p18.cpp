//Write C++ Program to Calculate the Power of a Number using function.
#include <iostream>
using namespace std;

int power(int base, int exp)
{
    int temp=1,I;
    for (I=0;I<exp;I++) 
    {
        temp *= base;
    }
    return temp;
}

int main()
{
    int base;
    int exp;
    
    cout << "Janvi k.chavda"<<endl;
    cout << "220130318090"<<endl;
    
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exp;

    cout << base << "^" << exp << " is: " << power(base, exp) << endl;

    return 0;
}