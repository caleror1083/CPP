#include <iostream>

using namespace std;

int main()
{
    int array[] = { 11, 22, 33, 44, 55 };

    for (auto i : array)
    {
        cout << "Element: " << i << endl;
    }

    system("pause");
    return 0;
}