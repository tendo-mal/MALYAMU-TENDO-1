 #include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Employee inherits from Person
class Employee : public Person {
public:
    int employeeID;

    void displayEmployee() {
        cout << "Employee ID: " << employeeID << endl;
    }
};

// ComputerAndCommunicationsEngineer inherits from Employee
class ComputerAndCommunicationsEngineer : public Employee {
public:
    string specialization;

    void displayEngineer() {
        cout << "Specialization: "
             << specialization << endl;
    }
};

int main() {
    // Create a ComputerAndCommunicationsEngineer object
    ComputerAndCommunicationsEngineer engineer;

    // Members inherited from Person
    engineer.name = "Tendo Malyamu";
    engineer.age = 21;

    // Member defined in Employee
    engineer.employeeID = 1001;

    // Member defined in ComputerAndCommunicationsEngineer
    engineer.specialization = "Computer Networks";

    cout << "COMPUTER AND COMMUNICATIONS ENGINEER DETAILS" << endl;
    cout << "--------------------------------------------" << endl;

    // Using inherited and locally defined functions
    engineer.displayPerson();
    engineer.displayEmployee();
    engineer.displayEngineer();

    return 0;
}