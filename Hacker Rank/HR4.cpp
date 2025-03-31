#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int age;
    string designation;
    double salary;

    void acceptDetails() {
        cin >> name >> age >> designation >> salary;
    }

    void displayDetails(int index) {
        cout << "Employee " << index + 1 << ":" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Employee employees[n];

    for (int i = 0; i < n; i++) {
        employees[i].acceptDetails();
    }

    for (int i = 0; i < n; i++) {
        employees[i].displayDetails(i);
    }

    return 0;
}