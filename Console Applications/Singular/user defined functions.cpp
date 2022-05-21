#include <iostream>
void myfun(int);

int main()
    {
        using namespace std;

        int yournum;

        cout << "What is your favorite number? ";
        cin >> yournum;
        myfun(yournum);

        // system("pause");
        cout << endl;
        return 0;
    }

void myfun(int x)
    {
        using namespace std;
        cout << "Your favorite number is " << x;
    }
