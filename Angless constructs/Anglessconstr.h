#pragma once
#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
using namespace std;

class Angle {
private:
    double degrees; // Angle in degrees
    double minutes; // Angle in minutes

public:
    Angle(); // Default constructor
    Angle(double degrees, double minutes); // Parameterized constructor
    Angle(double degrees); // Constructor with degrees only

    void Initialize(double degrees, double minutes); // Initialization method
    void Input(); // Input from the keyboard
    void Display() const; // Display on screen
    double toRadians() const; // Convert to radians
    void normalize(); // Normalize to the range 0-360
    void increase(double value); // Increase the angle by a specified value
    void decrease(double value); // Decrease the angle by a specified value
    double sine() const; // Get the sine value
    bool isEqual(const Angle& other) const; // Compare angles
    std::string toString() const; // Convert to string
};

#endif // ANGLE_H
