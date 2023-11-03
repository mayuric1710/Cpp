#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float spi;
};

int main() {
    cout << "Janvi k. Chavda"<<endl;
    cout << "220130318090"<<endl;
    Student students[10];
    float highestSPI = 0;
    string studentName;

    for (int i = 0; i < 10; i++) {
        cout << "Enter student name: ";
        cin >> students[i].name;
        cout << "Enter SPI: ";
        cin >> students[i].spi
        for (int i = 0; i < 10; i++) {
            cout << "Enter student name: ";
            cin >> students[i].name;
            cout << "Enter SPI: ";
            cin >> students[i].spi;

            if (students[i].spi > highestSPI) {
                highestSPI = students[i].spi;
                studentName = students[i].name;
            }
        }
        cout << "Student with the highest SPI is:: " << studentName << " SPI: " << highestSPI << endl;

        return 0;
    }