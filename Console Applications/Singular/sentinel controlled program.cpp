// This program calcuate the average of peoples ages

#include <iostream>
using namespace std;

int main()
    {
        int age;
        int ageTotal = 0;
        int numberOfPeople = 0;

        cout << "Enter a persons age or -1 to quit: ";
        cin >> age;

        while (age != -1)
            {
                ageTotal = ageTotal + age;
                numberOfPeople++;

                cout << "Enter another persons age or -1 to quit: ";
                cin >> age;
            }
        cout << "Number of people entered: " << numberOfPeople << endl;
        cout << "The average of all the ages is: " << ageTotal / numberOfPeople << endl;

        return 0;
    }