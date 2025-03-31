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

class Vehicle : public Transport {
public:
    string vehicle_type;

    void displayType() {
        cout << "Vehicle Type: " << vehicle_type << endl;
    }
};

class Car : public Vehicle {
public:
    string car_type;

    void displayCarType() {
        cout << "Car Type: " << car_type << endl;
    }
};

class Bike : public Vehicle {
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
    Supra.vehicle_type = "Sports Car";
    Supra.car_type = "Super Sports";

    cout << "Supra Details: " << endl;
    Supra.displayDetails();
    Supra.displayType();
    Supra.displayCarType();

    cout << endl;

    Bike Ninja;
    Ninja.max_speed = 250;
    Ninja.colour = "Kawasaki Green";
    Ninja.company = "Kawasaki";
    Ninja.num_of_passengers = 1;
    Ninja.vehicle_type = "Sports Bike";
    Ninja.bike_type = "Cruiser";

    cout << "Ninja Details: " << endl;
    Ninja.displayDetails();
    Ninja.displayType();
    Ninja.displayBikeType();

    return 0;
}
