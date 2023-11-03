#include <iostream>
using namespace std;

class Sample {
public:
  int value;
};

void modifyObject(Sample& modify) {
  modify.value = 42;
}

int main() {
  cout << "Mayuri R. Chavda"<<endl;
  cout << "220130318091"<<endl;
  Sample myObject;
  myObject.value = 10;

  cout << "Before modification: " << myObject.value << endl;
  modifyObject(myObject);
  cout << "After modification: " << myObject.value << endl;

  return 0;
}
