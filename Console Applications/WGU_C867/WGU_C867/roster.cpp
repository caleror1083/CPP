/* C867 Scripting and Programming - Applications
   Robert Calero
   Student ID# 000998416
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"

using namespace std;

int main()
	{
		cout << "C867 Scripting and Programming Applications" << endl;
		cout << "Programming language used: C++" << endl;
		cout << "Student ID: 000998416, Robert Calero" << endl;

		Roster classRoster;
		Degree degree
			{

			};

		string output, col[DATA_COLUMNS];
		for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
			{
				istringstream input(studentData[i]);

				for (int x = 0; x < DATA_COLUMNS; ++x)
					{
						getline(input, output, ',');
						col[x] = output;
					}
				switch (col[8][2])
					{
						case 'T':
							degree = Degree::NETWORK;
							break;
						case 'C':
							degree = Degree::SECURITY;
							break;
						case 'F':
							degree = Degree::SOFTWARE;
							break;
					}
				classRoster.add(col[0], col[1], col[2], col[3], stoi(col[4]), stoi(col[5]), stoi(col[6]), stoi(col[7]), degree);
			}

		cout << "\nClass Roster:" << endl;
		classRoster.printAll();
		cout << endl;

		cout << "Invalid emails are:" << endl;
		classRoster.printInvalidEmails();
		cout << endl;

		cout << "Average number of days in the 3 courses by Student ID:" << endl;

		for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
			{
				classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentId());
			}
		cout << endl;

		cout << "Students in Degree Program SOFTWARE:" << endl;
		classRoster.printByDegreeProgram(Degree::SOFTWARE);
		cout << endl;

		classRoster.remove("A3");
		classRoster.remove("A3");
		cout << endl;

		cout << "Updated Class Roster:" << endl;
		classRoster.printAll();
		cout << endl;

		classRoster.~Roster();

		system("pause");
		return 0;
	}

void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree)
	{
		int daysToComplete[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
		Student* student = nullptr;

		switch (degree)
		{
		case Degree::NETWORK:
			student = new NetworkStudent(studentId, firstName, lastName, emailAddress, age, daysToComplete, degree);
			break;
		case Degree::SECURITY:
			student = new SecurityStudent(studentId, firstName, lastName, emailAddress, age, daysToComplete, degree);
			break;
		case Degree::SOFTWARE:
			student = new SoftwareStudent(studentId, firstName, lastName, emailAddress, age, daysToComplete, degree);
			break;
		}

		for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
			{
				if (classRosterArray[i] == nullptr)
					{
						classRosterArray[i] = student;
						break;
					}
			}
	};

void Roster::printAll()
	{
		for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
			{
				if (classRosterArray[i] != nullptr)
					{
						classRosterArray[i]->print();
					}
			}
	};

void Roster::printInvalidEmails()
{
	bool valid = false;

	for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
	{
		if (classRosterArray[i] == nullptr)
		{
			continue;
		}

		valid = false;
		string email = classRosterArray[i]->getEmailAddress();
		size_t emailLength = email.size();
		size_t x = 0;

		while (email[x] != ' ' && email[x] != '@' && x < emailLength)
		{
			++x;
			if (email[x] == '@' && x < emailLength)
			{
				++x;
				while (email[x] != ' ' && email[x] != '@' && email[x] != '.' && x < emailLength)
				{
					++x;
					if (email[x] == '.' && x < emailLength)
					{
						++x;
						while (email[x] != ' ' && email[x] != '@' && email[x] != '.' && x < emailLength)
						{
							++x;
							if (x == emailLength)
							{
								valid = true;
							}
						}
					}
				}
			}
		}

		if (valid == false)
		{
			cout << email << endl;
		}
	}
};

void Roster::printAverageDaysInCourse(string studentId)
	{
		for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
			{
				if (studentId == classRosterArray[i]->getStudentId())
					{
						int* days = classRosterArray[i]->getDaysToComplete();
						cout << studentId << "\t";
						cout << setprecision(2) << (((float)days[0] + (float)days[1] + (float)days[2]) / 3) << endl;
					}
			}
	};

void Roster::printByDegreeProgram(Degree degree)
	{
		for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
			{
				Student* student = classRosterArray[i];
				if (student->getDegree() == degree)
					{
						student->print();
					}
			}
	};

void Roster::remove(string studentId)
{
	cout << "Removing student with ID " << studentId << "... " << flush;

	for (int i = 0; i < NUMBER_OF_STUDENTS; ++i)
	{
		if (classRosterArray[i] == nullptr)
		{
			cout << "ERROR: Student with this ID not found" << endl;
			break;
		}
		else if (studentId == classRosterArray[i]->getStudentId())
		{
			classRosterArray[i] = nullptr;
			cout << "Student removed" << endl;
		}
	}
};

Roster::~Roster()
	{

	};