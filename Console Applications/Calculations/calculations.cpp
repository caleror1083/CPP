// Robert Calero
// Output the sum of 5 numbers entered by the user

#include <iostream>
using namespace std;

int main()
    {
        int x = 1; // assigns a value to the variable
        int number; // declares a variable
        int total = 0; // assigns a value to the variable

        while (x <= 5)
            {
                cout << "Enter a number: "; // prints to the screen
                cin >> number; // gets input from user
                
                total = total + number; // increments the value of the variable by the number entered
                x++;
            }
            
        cout << "The total of these numbers is " << total << endl;
        
        system("pause"); // pauses the command line
        return 0;
    }
