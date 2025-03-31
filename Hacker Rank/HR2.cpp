#include <iostream>
using namespace std;

class Room
{
public:
    int length;
    int breadth;
    int height;

    int calculateArea()
    {
        return length * breadth;
    }

    int calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room room1;

    cin >> room1.length >> room1.breadth >> room1.height;

    cout << room1.calculateArea() << endl;
    cout << room1.calculateVolume() << endl;

    return 0;
}