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

    void bookRoom(){
        if(isAvailable){
            isAvailable = false;
            cout << "Room " << roomNumber << " booked successfully." << endl;
        } else{
            cout << "Room " << roomNumber << " is already booked." << endl;
        }
    }

    void cancelBooking(){
        if(!isAvailable){
            isAvailable = true;
            cout << "Room " << roomNumber << " booking cancelled successfully." << endl;
        } else{
            cout << "Room " << roomNumber << " is not booked." << endl;
        }
    }
};