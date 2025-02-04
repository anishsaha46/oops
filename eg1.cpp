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
}