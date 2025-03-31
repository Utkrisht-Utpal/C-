#include<iostream>
#include <string.h>
using namespace std;

class Vehicle
{
    public:
    string BS_Version;
    string Nationality;
    string engine_type;

    Vehicle()
    {
        BS_Version = "VII";
        Nationality = "Indian";
        engine_type = "Inline";
    }
};


class Car : public Vehicle
{
    public:
    string company;
    string colour;
    int wheels;
    string AIDAS;
    string transmission;
    int Airbags;
    string ABS;
    string Mediaplayer;

    Car()
    {
        wheels = 4;
        transmission = "Manual";
        AIDAS = "Level 1";
        Airbags = 3;
        ABS = "Yes";
        Mediaplayer = "Android Auto";
    }

    void getdetails()
    {
        cout << "Nationality: " << Nationality <<endl;
        cout << "Company: " << company <<endl;
        cout << "Engine Type: " << engine_type <<endl;
        cout << "Colour: " << colour <<endl;
        cout << "Wheels: " << wheels <<endl;
        cout << "AIDAS: " << AIDAS<<endl;
        cout << "Transmission: " << transmission<<endl;
        cout << "Airbags: " <<Airbags<<endl;
        cout << "ABS: " << ABS <<endl;
        cout << "Mediaplayer: " << Mediaplayer <<endl;
    }
};

int main()
{
    Car supra;
    supra.company = "Toyota";
    supra.colour = "Carbon Black";
    supra.getdetails();
    return 0;
}