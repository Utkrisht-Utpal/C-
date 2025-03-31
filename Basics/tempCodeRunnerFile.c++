int main()
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