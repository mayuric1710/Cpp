#include <iostream>
using namespace std;
class Item {
private:
    int number;
    int cost;

public:
    void setData(int num, double c) {
        number = num;
        cost = c;
    }

    void displayData() {
        cout << "Number: " << number <<endl;
        cout << "Cost: $" << cost <<endl;
    }
};

int main() {
    Item item;

    int num1;
    int cost1;
    cout << "Janvi k. Chavda" << endl;
    cout << "220130130318090" << endl;
    cout << "Enter number for Item : ";
    cin >> num1;
    cout << "Enter cost for Item : $";
    cin >> cost1;

    item.setData(num1, cost1);

    cout << "\nItem Information for Item :\n";
    item.displayData();



    return 0;
}
    