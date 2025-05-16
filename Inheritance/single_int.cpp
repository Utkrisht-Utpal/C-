#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    public:
    string Name;
    int no_of_wheels;
    int no_of_seats;
    string Type;

    void print()
    {
        cout << Name << endl;
        cout << Type << endl;
        cout << "No. of wheels" << no_of_wheels << endl;
        cout << "No of seats: "<< no_of_seats << endl;
    }
};

int main()
{
    Vehicle A;
    A.Name = "Supra";
    A.Type = "Hyper Car";
    A.no_of_seats = 2;
    A.no_of_wheels = 4;

    A.print();

    return 0;
}