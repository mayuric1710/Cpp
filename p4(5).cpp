#include <iostream>
using namespace std;

class Circle {
public:
  double radius;

  Circle(double r) {
    radius = r;
  }

  double getArea() {
    return 3.14 * radius * radius;
  }
};

Circle createCircle(double radius) {
  return Circle(radius);
}

int main() {
	cout<<"Janvi k. chavda"<<endl;
	cout<<"220130318090"<<endl;
  double r;
  cout << "Enter the radius of a circle: ";
  cin >> r;

  Circle myCircle = createCircle(r);
  cout << "Area of the circle: " << myCircle.getArea() << endl;

  return 0;
}