#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
    {
        char filename[50];
        ifstream bucky;
        cin.getline(filename, 50);
        bucky.open(filename);

        if(!bucky.is_open())
            {
                exit(EXIT_FAILURE);
            }
        char word[50];
        bucky >> word;
        while(bucky.good())
            {
                cout << word << " ";
                bucky >> word;
            }
        return 0;
    }