#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int marks;
    int subject = 5;
    float total = 0.0f, Average;

    for (int i = 0; i < subject; i++)
    {
        cin >> marks;
        if (marks < 0 || marks > 100)
        {
            cout << "Invalid marks! Marks must be between 0 and 100." << endl;
            return -1;
        }
        total += marks;
    }
    Average = total / subject;

    cout << fixed << setprecision(2);
    cout << Average << endl;

    if (Average < 40)
    {
        cout << "Failed" << endl;
    }
    else
    {
        cout << "Passed" << endl;
    }
    return 0;
}