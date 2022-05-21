#include <iostream>
using namespace std;

struct newperson
    {
        char name[20];
        int age;
    };

int main()
    {
        newperson hoss = {"Hoss Jones",45};
        cout << hoss.age << endl;
        return 0;
    }