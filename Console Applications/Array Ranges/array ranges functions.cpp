// Robert Calero
// Array ranges with functions

#include <iostream>
using namespace std;

int sum(const int * begin, const int * end);

int main()
    {
        int numbers[8] = { 2, 43, 4, 21, 6, 5, 65, 8 };
        int value = sum(numbers + 1, numbers + 4);
        
        cout << "The sum of the numbers is: " << value << endl; // prints to the screen and ends the line
        
        system("pause"); // pauses the command line
        return 0;
    }
    
int sum(const int * begin, const int * end)
    {
        const int *pointer;
        int total = 0; // assigns a value to the variable

        for(pointer = begin; pointer != end; pointer++)
            {
                total += *pointer;
            }
        return total;
    }
