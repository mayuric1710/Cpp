#include <iostream>
using namespace std;
class Max {
private:
    int num_1;
    int num_2;

public:
    void input() {
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;
    }

    
    void display() {
        cout << "Number 1: " << num_1 <<endl;
        cout << "Number 2: " << num_2 <<endl;
    }

    void largest() {
        int max = (num_1 > num_2) ? num_1 : num_2;
        cout << "The largest number is: " << max <<endl;
    }
};

int main() {
    
    Max numbers;

    cout << "Janvi k. Chavda" << endl;
    cout << "220130318090" << endl;
    numbers.input();
    cout << "Entered Numbers:\n";
    numbers.display();
    numbers.largest();

    return 0;
}
