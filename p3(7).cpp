#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    std::string name;
    int id;
    double salary;

public:
    // Constructor to initialize the employee object
    Employee(std::string empName, int empID, double empSalary) {
        name = empName;
        id = empID;
        salary = empSalary;
    }

    // Method to display employee information
    void displayEmployee() {
        cout << "Employee Name: " << name <<endl;
        cout << "Employee ID: " << id <<endl;
        cout << "Employee Salary: $" << salary <<endl;
    }

};

int main() {

    Employee emp1("Janvi", 1807, 50000.0);
    cout<<"Janvi K.Chavda"<<endl;
    cout<<"220130318090"<<endl;
    emp1.displayEmployee();


    return 0;
}
