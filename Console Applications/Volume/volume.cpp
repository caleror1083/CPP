// Robert Calero
// Calculating the volume of a box

#include <iostream>
using namespace std;

int volume(int length = 1, int width = 1, int height = 1);

int main()
    {
        cout << volume(5, 5, 5) << endl;
            
        system("pause"); // pauses the command line
        return 0;
    }

int volume(int length, int width, int height)
    {
        return length * width * height;
    }
