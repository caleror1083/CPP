#include <iostream>

using namespace std;

int populate(double bucky[], int limit);
void spit(const double bucky[], int n);
void revalue(double r, double bucky[], int n);
int main()
    {
        double items[5];
        int size = populate(items, 5);
        cout << endl;
        spit(items, 5);
        cout << endl;
        cout << "Enter factor to multiply by: ";
        double factor;
        cin >> factor;
        revalue(factor, items, 5);
        cout << endl;
        spit(items, 5);
        cout << "DONE" << endl;
        return 0;
    }
int populate(double bucky[], int limit)
    {
        double temp;
        for(int i = 0; i < limit; i++)
            {
                cout << "Enter dollars for item " << (i + 1) << ": ";
                cin >> temp;
                bucky[i] = temp;
            }
    }
void spit(const double bucky[], int n)
    {
        for(int i = 0; i < n; i++)
            {
                cout << "Price for item " << (i + 1) << ": $";
                cout << bucky[i] << endl;
            }
    }
void revalue(double r, double bucky[], int n)
    {
        for(int i = 0; i < n; i++)
            {
                bucky[i] *= r;
            }
    }