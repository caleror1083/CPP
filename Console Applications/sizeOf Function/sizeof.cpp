// Robert Calero
// SizeOf Function

#include <iostream>
using namespace std;

int main()
    {
    	char a;
    	int b;
    	double c;
    	double rob[5];
    	
    	cout << sizeof(a) << endl;
    	cout << sizeof(b) << endl;
    	cout << sizeof(c) << endl;
    	cout << sizeof(rob) << endl;
    	cout << sizeof(rob) / sizeof(rob[0]) << endl; // returns the number of elements in the array
    	
        system("pause"); // pauses the command line
        return 0;
    }
