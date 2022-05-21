#include <iostream>

using namespace std;

int answer(int bucky[], int num);
int main()
    {
        int numbers[5] = {4,54,23,43,7};
        int total = answer(numbers, 5);
        cout << "The sum of all the elements in the array is " << total << endl;

        return 0;
    }
int answer(int bucky[], int num)
    {
        int sum = 0;
        for(int i = 0; i < num; i++)
            {
                sum += bucky[i];
            }
        return sum;
    }