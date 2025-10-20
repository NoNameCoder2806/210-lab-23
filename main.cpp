// COMSC-210 | Lab 23 | Dat Hoang Vien
// IDE used: Visual Studio Code

// Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

// Constants
const int MIN_CHOICE = 1;
const int MAX_CHOICE = 4;
const int SIZE_NAMES = 200;
const int SIZE_COLORS = 25;
const int MAX_AGE = 20;
const string NAMES_PATH = "names.txt";
const string COLORS_PATH = "colors.txt";

// Function prototypes
int main_menu();
void add_goat(list<Goat> &trip, string names[], string colors[]);
void delete_goat(list<Goat> &trip);
int select_goat(list<Goat> trip);
void display_trip(list<Goat> trip);

// Main function
int main()
{
    // Call srand() and time() to generate a seed
    srand(time(0));

    // Create a bool variable
    bool again = true;        // Loop the program
    int i = 0;                // An int counter

    // Create arrays for names and colors
    string names[SIZE_NAMES];
    string colors[SIZE_COLORS];

    // Read and populate array for names
    ifstream fin(NAMES_PATH);
    while (fin >> names[i++]);
    fin.close();

    // Reset the i counter
    i = 0;

    // Read and populate array for colors
    ifstream fin1(COLORS_PATH);
    while (fin1 >> colors[i++]);
    fin1.close();

    // Create a loop to run the program
    while (again)
    {

    }

    return 0;
}

// Function implementations
/*
    main_menu()
    Display the menu of operations the user can implement on the list
    Arguments: none
    Return: user's choice (between 1 and 4)
*/
int main_menu()
{
    // Declare an int to store user's choice
    int choice;

    // Display the options for the user
    cout << "*** Goat Manager 3001 ***" << endl;
    cout << "[1] Add a goat" << endl;
    cout << "[2] Delete a goat" << endl;
    cout << "[3] List goats" << endl;
    cout << "[4] Quit" << endl;

    // Let user input their choice and store it in the choice variable
    cout << "Choice --> ";
    cin >> choice;
    cin.ignore(1000, 10);

    // Validate the input
    while (choice < MIN_CHOICE || choice > MAX_CHOICE)
    {
        // Display an error message
        cout << "--- Invalid! Your choice must be between 1 and 4! ----" << endl;

        // Prompt the user to enter a new choice
        cout << "New choice --> ";
        cin >> choice;
        cin.ignore(1000, 10);
    }

    // Return the user's choice
    return choice;
}

/*
    add_goat()
    Add a Goat object into the Goat list (trip)
    Arguments:
        - trip: the list of Goat objects (passed by reference)
        - names: an array containing all the Goat names (passed by value)
        - colors: an array containing all the Goat colors (passed by value)
    Return: none
*/
void add_goat(list<Goat>& trip, string names[], string colors[])
{
    // Create 3 variables as the Goat object's member variables
    string n = names[rand() % SIZE_NAMES];
    string c = colors[rand() % SIZE_COLORS];
    int a = rand() % (MAX_AGE + 1);

    // Create a temporary Goat object using the parameter Constructor
    Goat temp(n, a, c);

    // Add the Goat object to the trip
    trip.push_front(temp);
}

/*
    delete_goat()
    Delete a Goat object from the Goat list (trip)
    Arguments:
        - trip: the list of Goat objects (passed by reference)
    Return: none
*/
void delete_goat(list<Goat> &trip)
{
    // Create a variable to get the user's choice
    
}

/*
    display_trip()
    Display the whole Goat list
    Arguments: 
        - trip: the list of Goat objects (passed by value)
    Return: none
*/
void display_trip(list<Goat> trip)
{
    // Create a counter
    int count = 0;

    // Iterate through the Goat list
    for (auto it = trip.begin(); it != trip.end(); ++it)
    {
        // Display the Goat object
        cout << "\t[" << count + 1 << "] ";        // The index
        it->print();                               // The print() member function
        cout << endl;                              // Enter a new line
    }

    // Enter a new line
    cout << endl;
}