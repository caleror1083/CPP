// this program uses the switch statement

#include <iostream>
using namespace std;

int main()
    {
        int age;

        cout << "How old are you? ";
        cin >> age;

        switch(age)
            {
                case 16:
                    cout << "You can drive" << endl;
                    break; // ends switch
                case 18:
                    cout << "Buy lottery" << endl;
                    break;
                case 21:
                    cout << "Drinks" << endl;
                    break;
                default:
                    cout << "ok" << endl;
            }
    }