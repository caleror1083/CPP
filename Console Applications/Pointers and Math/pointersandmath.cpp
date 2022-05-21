// Robert Calero
// Pointers and Math

#include <iostream>
using namespace std;

int main()
    {     
		int rob[5];
		int *bp0 = &rob[0];
		int *bp1 = &rob[1];
		int *bp2 = &rob[2];
		
		cout << "bp0 is at " << bp0 << endl; // returns the memory address of the pointer
		cout << "bp1 is at " << bp1 << endl; // returns the memory address of the pointer
		cout << "bp2 is at " << bp2 << endl; // returns the memory address of the pointer
		
		// bp0++;
		bp0 += 2; // adds a value to the pointer
		
		cout << "bp0 is finally at " << bp0 << endl; // returns the memory address

        system("pause"); // pauses the command line
        return 0;
    }
