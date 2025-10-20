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
    string name;                  // Goat's name
    int age;                      // Goat's age
    string color;                 // Goat's color

public:
    // Constructors
    Goat()                                 // Default constructor
    {
        name = "";
        age = 0;
        color = "";
    }

    Goat(string n)                         // Constructor with name
    {
        name = n;
        age = 0;
        color = "";
    }

    Goat(string n, int a)                  // Constructor with name and age
    {
        name = n;
        age = a;
        color = "";
    }

    Goat(string n, int a, string c)        // Constructor with all parameters
    {
        name = n;
        age = a;
        color = c;
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