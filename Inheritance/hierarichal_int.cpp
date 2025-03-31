#include <iostream>
using namespace std;

class Transport {
public:
    int max_speed;
    string colour;
    string company;
    int num_of_passengers;

    void displayDetails() {
        cout << "Max Speed: " << max_speed << endl;
        cout << "Colour: " << colour << endl;
        cout << "Company: " << company << endl;
        cout << "Number of Passengers: " << num_of_passengers << endl;
    }
};

class Car : public Transport {
public:
    string car_type;

    void displayCarType() {
        cout << "Car Type: " << car_type << endl;
    }
};

class Bike : public Transport {
public:
    string bike_type;

    void displayBikeType() {
        cout << "Bike Type: " << bike_type << endl;
    }
};

int main() {
    Car Supra;
    Supra.max_speed = 400;
    Supra.colour = "Carbon Black";
    Supra.company = "Toyota";
    Supra.num_of_passengers = 2;
    Supra.car_type = "Sports Car";

    cout << "Supra Details: " << endl;
    Supra.displayDetails();
    Supra.displayCarType();

    cout << endl;

    Bike Ninja;
    Ninja.max_speed = 250;
    Ninja.colour = "Kawasaki Green";
    Ninja.company = "Kawasaki";
    Ninja.num_of_passengers = 1;
    Ninja.bike_type = "Sports Bike";

    cout << "Ninja Details: " << endl;
    Ninja.displayDetails();
    Ninja.displayBikeType();

    return 0;
}