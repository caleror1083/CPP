#include <iostream>

int dogyears(int);

int main()
    {
        using namespace std;

        int years;
        cout << "Enter your dogs age: ";
        cin >> years;

        int peopleyears = dogyears(years);
        cout << "Your dog is " << peopleyears;

        // system("pause");
        cout << endl;
        return 0;
    }
int dogyears(int dog)
    {
        return 7 * dog;
    }
