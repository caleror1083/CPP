// Robert Calero
// Constructors

#include <iostream>      
#include <string>           
using namespace std;

class BuckysClass                  // BuckysClass class declaration
    {
        public:                    // access specifier that can be used by main
            BuckysClass(string y)  // constructor
                {
                    setName(y);    // call setName function
                }
            void setName(string x) // setName function
                {
                    name = x;
                }
            string getName()       // getname function
                {
                    return name;
                }
        private:                  // access specifier that cannot be used by main
             string name;         // variable declaration
    };
    
int main()
    {
        BuckysClass bo("Lucky Bucky Roberts");         // objectname for class
        cout << bo.getName() << endl;
        
        BuckysClass bo2("Sally McSalad");         // objectname for class
        cout << bo2.getName() << endl;
        
        system("pause"); // pauses the command line
        return 0;
    }
