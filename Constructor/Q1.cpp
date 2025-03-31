#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    string name;
    string roll_no;
    float marks;

student()
{
    cout << "Constructor called" <<endl;
    cout <<"-----------------------------" <<endl;
    name = "No name";
    roll_no = "24BCF1000";
    marks = 00.00;
}

void details()
{
    cout << name <<endl;
    cout << roll_no <<endl;
    cout << marks <<endl;
    cout <<"-----------------------------" <<endl;
}
~student()
{
    cout << "This is a destructor and memory is being clear here! "<<endl;
}
};

int main()
{
    student s1;
    s1.name = "Utkrisht ";
    s1.roll_no = "24BCF10003";
    s1.marks = 6.95;
    
    s1.details();
   
    student s2;
    s2.name = "Utpal";
    s2.roll_no = "24BCF10001";
    s2.marks = 8.05;

    s2.details();

    student s3;
    s3.details();
    }