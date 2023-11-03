#include <iostream>
using namespace std;

class Product {
private:
    string product_id;
    string product_name;
    double unit_price;

public:
    void getData() {
        cout << "Enter Product ID: ";
        cin >> product_id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, product_name);
        cout << "Enter Unit Price: ";
        cin >> unit_price;
    }

    void putData() {
        cout << "Product ID: " << product_id << endl;
        cout << "Product Name: " << product_name << endl;
        cout << "Unit Price: " << unit_price << endl;
    }
};

int main() {
    Product product1;
    cout << "Janvi K.Chavda" << endl;
    cout << "220130318090" << endl;
    cout << "Enter data for the first product:" << endl;
    product1.getData();

    cout << "\nProduct 1 details:" << endl;
    product1.putData();


    return 0;
}
