#include <iostream>

class Circle {
public:
    double calculateArea(double radius, double pi = 3.14159) {
        return pi * radius * radius;
    }
};

int main() {
    Circle circle;
    double radius;
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = circle.calculateArea(radius);

    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
    }