/*Write a C++ program to create class Shape with public data 

member’s height & base. Member function are display_shape(). Call 

member function using object of the class. (* scope resolution 

operator method define outside the class).*/
#include <iostream>

class Shape {
public:
    double height;
    double base;

    
    Shape(double h, double b) {
        height = h;
        base = b;
    }

    
    void display_shape();
};

void Shape::display_shape() {
    std::cout << "Height: " << height << " units" << std::endl;
    std::cout << "Base: " << base << " units" << std::endl;
}
int main() {
cout << "Janvi k. Chavda"<<endl;
    cout << "220130318090"<<endl;
    Shape myShape(5.0, 7.0);
    myShape.display_shape();

    return 0;
    }