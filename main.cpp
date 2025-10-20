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
const int SIZE_NAMES = 200;
const int SIZE_COLORS = 25;
const int MAX_AGE = 20;
const string NAMES_PATH = "names.txt";
const string COLORS_PATH = "colors.txt";

// Function prototypes
int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

// Main function
int main()
{
    // Call srand() and time() to generate a seed
    srand(time(0));

    // Create a bool variable
    bool again;
    int i = 0;

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

    return 0;
}