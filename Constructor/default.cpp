#include <iostream>
#include <string.h>
using namespace std;

class Teacher
{   
    private:
    double salary;

    public:
    string name;
    int age;
    string subject;

    public:
    Teacher()
    {
        cout << "This is a constructor." <<endl;
        cout << "----------------------" <<endl;
        age = 1;
    }

    void setsalary(double s)
    {
        salary = s;
    }

    double getsalary()
    {
        return salary;
    }

    ~Teacher()
    {
        cout << "----------------------" <<endl;
        cout << "This is a destructor." <<endl;
    }
    void printdetails()
    {
        cout << name << endl;
        cout << age << endl;
        cout << subject << endl;
        cout << "$ "<< getsalary() << endl;
    }
};

int main ()
{
    Teacher t1;
    t1.name = "Utpal";
    t1.age = 18;
    t1.subject = "C++";
    t1.setsalary(50000.50);

    t1.printdetails();
}