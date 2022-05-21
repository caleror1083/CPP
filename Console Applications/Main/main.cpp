// Robert Calero
// Various Examples

#include <iostream>
#include <string>
using namespace std;

class FirstClass
	{
		public:
			FirstClass() // firstObject
				{
					cout << "printing anything";
				}
			void setName(string x)
				{
					name = x;
				}

			string getName()
				{
					return name;
				}

			void coolSaying()
				{
					cout << endl << "Preaching to the choir" << endl;
				}

		private:
			string name;
	};

		void printSomething(int x)
			{
				cout << x << endl << endl;
			}

		int addNumbers(int x, int y)
			{
				int answer = x + y;
				return answer;
			}

		int main()
			{
				if (5 > 3)
					{
						cout << "You are old" << endl << endl;
					}

				printSomething(20); // calls the printSomething function

				cout << addNumbers(43, 86) << endl << endl; // calls the addNumbers function

				FirstClass firstObject;

				firstObject.setName("Sir Bucky Wallace");
				cout << firstObject.getName() << endl;

				firstObject.coolSaying();

				system("pause"); // pauses the command line
                return 0;
			}
