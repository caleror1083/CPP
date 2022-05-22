// Robert Calero
// User Input - C++ - Console Application

#include <iostream>

using namespace std;

int main()
    {
        string userName;                              // Variable declaration of type string
        int userAge;                                  // Variable declaration of type int
        double userSalary;                            // Variable declaration of type double
        
        cout << "What is your name: ";                // Writes text to the console
        cin >> userName;                              // Console awaits user input

        cout << "What is your age: ";                 // Writes text to the console
        cin >> userAge;                               // Console awaits user input

        cout << "What is your salary? ";              // Writes text to the console
        cin >> userSalary;                            // Console awaits user input

        cout << endl;                                 // Goes to the next line

        cout << "Your name is: " << userName << endl; // Writes text to the console and value of a variable and goes to the next line 
        cout << "Your age is: " << userAge << endl;   // Writes text to the console and value of a variable and goes to the next line
        cout << "Your salary is: " << userSalary << endl;     // Writes text to the console and value of a variable
        return 0;
    }