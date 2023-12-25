#include "Examples.h"
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void Examples::ProcessExamples()
{
    Start:
        cout << "Please select an example from 1-15: ";
        
        int choice;
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Selection chosen is incorrect\n";
            goto Start;
        }

        switch (choice)
        {
            case 1:
                Example1();
                break;
            default:
                cout << "Your choice is invalid\n";
                goto Start;
        }

    Decide:
        cout << "Do you want to do another example? - Yes or No: ";
        string decision;
        cin >> decision;

        transform(decision.begin(), decision.end(), decision.begin(), ::toupper);

        if (decision == "YES")
        {
            goto Start;
        }
        else if (decision == "NO")
        {
            return;
        }
        else
        {
            cout << "Your decision is invalid. Try again\n";
            goto Decide;
        }
}

void Examples::Example1()
{
    cout << "Writes a string to the console followed by a newline escape sequence\n";
}