#include <iostream>

using namespace std;

int populate(double array1[], int number);
void spit(double array1[], int number);

int main()
    {
        double bucky[5] = {};
        populate(bucky, 5);
        cout << endl;
        spit(bucky, 5);
        return 0;
    }
int populate(double array1[], int number)
    {
        double input;
        int i;

        for(i = 0; i < number; i++)
            {
                cout << "Enter value for item " << (i + 1) << ": ";
                cin >> input;
                array1[i] = input;
            }
        return i;
    }
void spit(double array1[], int number)
    {
        for(int i = 0; i < number; i++)
            {
                cout << "The value of item " << (i + 1) << " is " << array1[i] << endl;
            }
    }