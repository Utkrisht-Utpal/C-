#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
    string name;
    int age;
    bool studying;
    string occupation;
    bool married;

    void isEating()
    {
        cout << "This person is now eating and then he will wash his hands." << endl;
    }

    void isMarrying()
    {
        cout << "I think the person is going to marry soon." << endl;
    }

    void isSleeping()
    {
        cout << "This person is sleeping." << endl;
    }
};

int main ()
{

    Human Human1;
    Human1.name = "Utpal";
    Human1.age = 18;
    Human1.married = false;
    Human1.occupation = "Student";
    
    cout << Human1.name << endl;
    cout << Human1.age << endl;
    cout << Human1.married << endl;
    cout << Human1.occupation << endl;
    
    Human1.isEating();
    Human1.isSleeping();

    return 0;
}