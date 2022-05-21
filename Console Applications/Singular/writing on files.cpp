#include <iostream>
#include <fstream>
using namespace std;

int main()
    {
        ofstream myfile;
        myfile.open("newfile.txt");
        myfile << "New line";
        myfile.close();
        return 0;
    }