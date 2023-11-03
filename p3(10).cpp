#include <iostream>
using namespace std;
class MaxFinder {
public:
    int findMax(int num1, int num2, int num3) {
        int max = num1;

        if (num2 > max) {
            max = num2;
        }

        if (num3 > max) {
            max = num3;
        }
        return max;
    }
};

int main() {
    MaxFinder finder;
    int num1, num2, num3;
    cout << "Janvi k. Chavda" << endl;
    cout << "220130318090" << endl;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int maximum = finder.findMax(num1, num2, num3);
    cout << "The maximum number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << maximum << endl;

    return 0;
}
