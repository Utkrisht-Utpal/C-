#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << a;
    cout << *p;

    *p = 20;
    cout << a;

    return 0;
}