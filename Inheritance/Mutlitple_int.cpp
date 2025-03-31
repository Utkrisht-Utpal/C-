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

class Vehicle {
public:
    string vehicle_type;

    void displayType() {
        cout << "Vehicle Type: " << vehicle_type << endl;
    }
};

class Car : public Transport, public Vehicle { };

int main() {
    Car Supra;
    Supra.max_speed = 400;
    Supra.colour = "Carbon Black";
    Supra.company = "Toyota";
    Supra.num_of_passengers = 2;
    Supra.vehicle_type = "Sports Car";

    cout << "Supra Details: " << endl;
    Supra.displayDetails();
    Supra.displayType();

    return 0;
}