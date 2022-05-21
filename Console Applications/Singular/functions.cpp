#include <iostream>
using namespace std;

int main()
    {
        double num1;
        cout << "Pick your number... ";
        cin >> num1;

        double num2;
        num2 = sqrt(num1);

        cout << "The square root of " << num1 << " is " << num2;

        // system("pause");
        cout << endl;
        return 0;
    }