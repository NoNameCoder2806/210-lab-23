// COMSC-210 | Lab 23 | Dat Hoang Vien
// IDE used: Visual Studio Code

// Goat.h
#ifndef GOAT_H
#define GOAT_H

// Libraries
#include <iostream>
using namespace std;

// Goat class
class Goat
{
private:
    string name;  // Goat's name
    int age;      // Goat's age
    string color; // Goat's color

public:
    // Constructors
    Goat() // Default constructor
    {
        name = "";
        age = 0;
        color = "";
    }

    // Accessors / Getters
    int getAge() const
    {
        return age;
    }

    string getName() const
    {
        return name;
    }

    string getColor() const
    {
        return color;
    }

    // Mutators / Setters
    void setAge(int a)
    {
        age = a;
    }

    void setName(string n)
    {
        name = n;
    }

    void setColor(string c)
    {
        color = c;
    }

    // write overloaded < operator for the std::list
};

#endif