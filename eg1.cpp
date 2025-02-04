// Design a Hotel Management System

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Room {
    int roomNumber;
    string roomType;
    double priceperNight;
    bool isAvailable;

    Room(int number, string type, double price) : roomNumber(number), roomType(type), priceperNight(price), isAvailable(true){};

    void dispalay() const {
        cout << "Room Number: " << roomNumber << ", Type: " << roomType << ", Price per Night: $" << priceperNight << ", Availability: " << (isAvailable? "Yes" : "No") << endl;
    }
}