#include <iostream>         // preprocessor directive
#include <string>           // preprocessor directive
using namespace std;

class BuckysClass       // BuckysClass class declaration
    {
        public:         // access specifier that can be used by main
            void setName(string x)          // setName function
                {
                    name = x;
                }
            string getName()            // getname function
                {
                    return name;
                }
        private:         // access specifier that cannot be used by main
             string name;       // variable declaration
    };
int main()
    {
        BuckysClass bo;         // objectname: bo for class: BuckysClass
        bo.setName("Sir Bucky Wallace");            // objectname.function
        cout << bo.getName();
        return 0;
    }