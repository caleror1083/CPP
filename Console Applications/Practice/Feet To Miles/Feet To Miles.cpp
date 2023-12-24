#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
    int yards_in_mile = 1760;
    int feet_in_yard = 3;
    int feet_in_mile = 0;

    feet_in_mile = yards_in_mile * feet_in_yard; // Multiplies 2 variables and assigns the value to another variable

    cout << "Feet in a mile: " << feet_in_mile << endl; // Writes the variable value to the console and concatenates a string

    system("pause");
    return 0;
}