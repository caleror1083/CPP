// Robert Calero
// Classes and objects

#include <iostream>
using namespace std;

class BuckysClass // BuckysClass class declaration
    {
        public: // access specifier that can be used by main
            void coolSaying() // coolSaying function
                {
                    cout << "Preaching to the choir" << endl;
                }
    };
    
int main()
    {
        BuckysClass buckysObject; // objectname for the BuckysClass class
        buckysObject.coolSaying(); // objectname.function
        
        system("pause"); // pauses the command line
        return 0;
    }
