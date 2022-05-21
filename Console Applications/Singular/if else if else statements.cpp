#include <iostream>
using namespace std;

int main()
    {
        // Declare variables
        int answer;

        // Process
        cout << "How old is Bucky? ";
        do
            {
                cin >> answer;

                // if else statement - output
                if(answer > 21)
                    {
                        cout << "Too high, enter another age ";
                    }
                else if(answer < 21)
                    {
                        cout << "Too low, enter another age ";
                    }
                else
                    {
                        cout << "You're right, Bucky is 21" << endl;
                    }
            }
        while(answer != 21);
        return 0;
    }