//write C++ Program to For Fibonacci Numberusing function.

#include <iostream>
using namespace std;
int fibo(int no);

int main() {
    int num;
    cout<<"Janvi k.chavda";
    cout<<"220130318090";
    
    cout << "Enter the value till which you want Fibonacci series ";
    cin >> num;

    
    for (int i = 0; i < num; i++) {
        cout << fibo(i) << "\t";
    }

    return 0;
}
int fibo(int no) {
    if (no <= 1) {
        return no;
    }
    return fibo(no - 1) + fibo(no - 2);
}