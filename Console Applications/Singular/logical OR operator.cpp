#include <iostream>
using namespace std;

int main()
    {
        // Process
        cout << "Who is going to win the Super Bowl? <g/p> ";
        char answer;
        cin >> answer;

        // if else statement
        if(answer == 'g' || answer == 'G')
            {
                cout << "why would you pick them" << endl;
            }
        else if(answer == 'p' || answer == 'P')
            {
                cout << "ok kool" << endl;
            }
        else
            {
                cout << "answer the question" << endl;
            }
        return 0;
    }