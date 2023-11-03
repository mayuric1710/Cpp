#include <iostream>
using namespace std;
class Product {
public:
    int manufactureYear;
    int expiryYear;
};

int calculateYearDifference(const Product &product) {
    return product.expiryYear - product.manufactureYear;
}

int main() {
    Product product;
    cout << "Janvi k. Chavda" << endl;
    cout << "220130318090" << endl;
    cout << "Enter the manufacture year: ";
    cin >> product.manufactureYear;
    
    cout << "Enter the expiry year: ";
    cin >> product.expiryYear;

    int difference = calculateYearDifference(product);

    cout << "The difference between manufacture year and expiry year is: " << difference << " years" << std::endl;

    return 0;
}
