#include <iostream>
using namespace std;

class AO
{
    public:
    float a;
    float b;

    AO ()
    {
        a = 1;
        b = 1;
    }

    float sum()
    {
        return (a+b);
    } 
};

int main ()
{
    AO h1;
    h1.sum();
    cout << "The sum is: " << h1.sum() <<endl;
    return 0;
}