// Robert Calero
// Variables - C++ - Console Application

#include <iostream>

using namespace std;

int main()
    {
        // Numbers - Integers
        short myShort = 2;                                                                           // Variable declaration and initialization of type short
        int myInt = 3;                                                                               // Variable declaration and initialization of type short
        long myLong = 4;                                                                             // Variable declaration and initialization of type long

        // Numbers = Real Numbers
        double myDouble = 5.9;				                                                         // Variable declaration and initialization of type double
        float myFloat = 6.35F;				                                                         // Variable declaration and initialization of type float

        // Characters
        char myChar = 'A';                                                                           // Variable declaration and initialization of type char
        string myString = "This is a string";                                                        // String declaration and initialization

        // Logical
        bool myBool = true;                                                                          // Variable declaration and initialization of type bool

        // Assigning values to a variable
        double myUnvaluedDouble;                                                                     // Variable declaration of type double
        myUnvaluedDouble = 5.29;	    	                                                         // Assigning a value to a variable that was not initialized when declared

        cout << "Variable Examples: " << endl;                                                       // Writes text to the console and goes to the next line
        cout << "Short data type: " << myShort << endl;                                              // Writes text to the console and value of a variable and goes to the next line
        cout << "Int data type: " << myInt << endl;                                                  // Writes text to the console and value of a variable and goes to the next line
        cout << "Long data type: " << myLong << endl;                                                // Writes text to the console and value of a variable and goes to the next line
        cout << "Double data type: " << myDouble << endl;                                            // Writes text to the console and value of a variable and goes to the next line
        cout << "Float data type: " << myFloat << endl;                                              // Writes text to the console and value of a variable and goes to the next line
        cout << "Char data type: " << myChar << endl;                                                // Writes text to the console and value of a variable and goes to the next line
        cout << myString << endl;                                                                    // Writes value of a variable and goes to the next line
        cout << "Boolean data type: " << myBool << endl;                                             // Writes text to the console and value of a variable and goes to the next line
        cout << "Double that was not initialized when declared: " << myUnvaluedDouble;               // Writes text to the console and value of a variable and goes to the next line
        cin.get();	                                                                                 // Pauses the program
        return 0;
    }