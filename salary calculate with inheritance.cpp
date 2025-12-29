
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    virtual double calculateSalary() {
        return salary;
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n, double s, double b)
        : Employee(n, s), bonus(b) {}

    double calculateSalary() override {
        return salary + bonus;
    }
};

int main() {
    Manager m("Bhuban", 50000, 10000);
    cout << "Total Salary: " << m.calculateSalary();
    return 0;
}
