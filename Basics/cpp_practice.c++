//adding two numbers

#include<iostream>
using namespace std;

// int main()
// {  
//     int a, b, sum;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     sum = a+b;
//     cout << "The sum of " << a << "and" << b << "is: " << sum << endl;
// }

//calculating simple interest.

// int main()
// {
//     int A, P, I, T, SI;
//     cout << "Enter the amount (in INR) at which you want to calculate simple intreset: "<<endl;
//     cin >> P;
//     cout << "Enter the rate of interest: "<<endl;
//     cin >> I;
//     cout << "Enter the time period: " << endl;
//     cin >> T;

//     SI = (P*I*T)/100;
//     cout << "The simple interest for " << P << " amount in " << T << "years is: INR " << SI <<endl;
//     A = SI + P;
//     cout << "The total payable for the same amount is: " << A <<endl;
//     return 0;
// }

//which number is greater

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: " <<endl;
//     cin >> a >> b;

//     if (a > b)
//     {
//     cout << a << " is greater than " << b << endl;
//     }
//     else if (b > a)
//     {
//         cout << b << " is greater than " << a << endl;
//     }
//     else
//     {
//     cout << "Please inter a valid number."<< endl;    
//     }
//     return 0;
// }

// code for odd or even

// int main()
// {
//     int a;
//     cout << "Enter a number to determine if it is even or odd.";
//     cin >> a;
    
//     if ((a % 2) == 0)
//     {
//         cout << a << " is an even number.";
//     }
//     else
//     {
//         cout << a << " is an odd number.";
//     }
//     return 0;
// }

// Number till user input.

// int main ()
// {
//     int n;
//     cout << "Enter the number until when you want the number to go: " ;
//     cin >> n;

//     for (int i = 1; i <= n  ; i++)
//     {
//         cout << "The next number is: "<< i << "." <<endl;
//     }

//     return 0;
// }

// code for Number till user input except even.

// int main ()
// {
//     int n;
//     cout << "Enter the number until when you want the number: ";
//     cin >> n;

//     int i = 1;
//     while(i <= n)
//     {
//         if((i%2) != 0)
//     {
//         cout << i << endl;
//     }
//         i ++;
//     }

//     return 0;
// }

//code for addition of numbers upto n.

// int main ()
// {
//     int n, sum = 0;
//     cout << "Enter the value upto which you want the sum: ";
//     cin >> n;

    
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//         cout << "The "<< i << "st number is: " << i << endl;  
//     }
    
//     cout << "The sum is: " << sum <<endl;
//     return 0;
// }

//Code to find the sum of all even numbers

// int main()
// {
//     int n, sum = 0;
//     cout << "Enter the number upto which you want the sum: ";
//     cin >> n;
//     cout << "The numbers are as follows: " << endl;

//     for (int i = 2; i <= n; i +=2)
//     {
//         cout << i << "\t";
//     }

//     for (int i = 2; i <= n; i +=2)
//     {
//         sum += i;
//     }
//     cout << "The sum of numbers till " << n << " is: " << sum;

//     return 0;
// }

// code to convert fahrenheit to celsius and vice - versa

// int main()
// {
//     float converse;
//     int choice;
//     float temp;
//     cout << "Select the operation you want to use: "<< endl;
//     cout << "1. Fahrenheit to Celsius" << endl;
//     cout << "2. Celsius to Fahrenheit" << endl;
//     cout << "3. Celsius to kelvin" << endl;
//     cout << "4. Fahrenheit to kelvin" << endl;
//     cout << "5. Exit" << endl;
//     cout << "Your choice: ";
//     cin >> choice;

//     converse = 5.0/9.0;

//     if (choice == 5)
//     {
//         cout << "Thanks for using this program!" << endl;
//         return 1;
//     }

//     cout << "Enter the temperature that you want to convert: ";
//     cin >> temp;

//     switch (choice)
//     {
//     case 1:
//     {
//         float c;
//         c = ((temp - 32) * converse);
//         cout << "The temperature in celsius is: " << c <<endl;
//         break;
//     } 

//     case 2:
//     {
//         float f;
//         f = ((temp * (9.0/5.0)) + 32);
//         cout << "The temperature in fahrenheit is: " << f <<endl;
//         break;
//     }
        
//     case 3:
//     {
//         float ck;
//         ck = temp + 273.15;
//         cout << "The temperature in Kelvin is: " << ck << endl;
//         break;
//     }
    
//     case 4:
//     {
//         float fk;
//         fk = ((temp -32) * converse) + 273.15;
//         cout << "The temperature in Kelvin is: " << fk << "K" << endl;
//         break;
//     }

//     default:
//     {
//         cout << "Please enter a valid option";
//         break;
//     }
//     }
//     return 0;
// }

// code for prime or not

// int main()
// {
//     int n;
//     cout << "Enter the number upto which you want the prime number: " ;
//     cin >> n;

//     int i = 2;
//     while (i <= n) {
//         if (n % i == 0) {
//             cout << n << " is not a prime number." << endl;
//             return 0;
//         }
//         i++;
//     }
//     return 0;
// }