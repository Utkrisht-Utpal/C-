#include <iostream>
using namespace std;

int main()
{
    // char ch;

    // cout << "Enter the character: ";
    // cin >> ch;

    // if ((int)ch > 65 && (int)ch < 90)
    // {
    //     cout << "Uppercase";
    // }

    // else if ((int) ch > 97 && (int) ch < 122)
    // {
    //     cout << "Lowercase";
    // }

    // int i = 1;
    // // while (i <= 10)
    // // {
    // //     cout << i << endl;
    // //     i++;
    // // }

    // do {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 10);

    int n;
    cout << "Enter the number you want to check: ";
    cin >> n;

    int sum = 0;

    // while(i <= n){
    //     sum += i;
    //     i++;
    // }

    // for(int i = 1; i <= n; i++)
    // {
    //     if(i % 2 != 0)
    //     {
    //     sum += i;
    //     }
    // }
    // cout << sum;

    // if (n < 0)
    // {
    //     cout << "Don't do this";
    //     return 1;
    // }
    // bool isPrime = true;

    // for(int i = 2; i < n; i++)
    // {
    //     if (n % i == 0){
    //     isPrime = false; 
    //     break;
    //     }
    // }

    // if (isPrime == false)
    // {
    //     cout << "This is not a prime";
    // }

    // else{
    //     cout << "This is a prime";
    // }

    for (int i = 3; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}