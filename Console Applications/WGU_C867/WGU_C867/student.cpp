/* C867 Scripting and Programming - Applications
   Robert Calero
   Student ID# 000998416
*/

#include <iostream>
#include "student.h"

using namespace std;

	// Constructors
	Student::Student() : studentId(""), firstName(""), lastName(""), emailAddress(""), age(-1), daysToComplete(new int[daysInCourseArraySize])
		{
			for (int i = 0; i < daysInCourseArraySize; ++i)
				{
					this->daysToComplete[i] = 0;
				}
		}

	Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], Degree degree) : studentId(studentId), firstName(firstName), lastName(lastName), emailAddress(emailAddress), age(age), daysToComplete(new int[daysInCourseArraySize])
		{
			for (int i = 0; i < daysInCourseArraySize; ++i)
				{
					this->daysToComplete[i] = daysToComplete[i];
				}
		}

	// Accessors (i.e Getters)
	string Student::getStudentId() const
		{
			return studentId;
		}

	string Student::getFirstName() const
		{
			return firstName;
		}

	string Student::getLastName() const
		{
			return lastName;
		}

	string Student::getEmailAddress() const
		{
			return emailAddress;
		}

	int Student::getAge() const
		{
			return age;
		}

	int* Student::getDaysToComplete() const
		{
			return daysToComplete;
		}

	Degree Student::getDegree()
		{
			return degree;
		}

	// Mutators (i.e. Setters)
	void Student::setStudentId(string studentId)
		{
			this->studentId = studentId;
		}

	void Student::setFirstName(string firstName)
		{
			this->firstName = firstName;
		}

	void Student::setLastName(string lastName)
		{
			this->lastName = lastName;
		}

	void Student::setEmailAddress(string emailAddress)
		{
			this->emailAddress = emailAddress;
		}

	void Student::setAge(int age)
		{
			this->age = age;
		}

	void Student::setDaysToComplete(int daysToComplete[])
		{
			this->daysToComplete = new int[daysInCourseArraySize];
			
			for (int i = 0; i < daysInCourseArraySize; ++i) this->daysToComplete[i] = daysToComplete[i];
		}

	void Student::setDegree(Degree degree)
		{
			this->degree = degree;
		}

	// Print
	void Student::print()
		{
			cout << "Student ID: " << getStudentId() << "\t";
			cout << "First Name: " << getFirstName() << "\t";
			cout << "Last Name: " << getLastName() << "\t";
			cout << "Age: " << getAge() << "\t";

			int* days = getDaysToComplete();
			cout << "Days In Course: " << "{" << days[0] << ", " << days[1] << ", " << days[2] << "}" << "\t";

			string degreeString = "";
			
			switch (getDegree())
				{
					case Degree::NETWORK:
						degreeString = "NETWORK";
						break;
					case Degree::SECURITY:
						degreeString = "SECURITY";
						break;
					case Degree::SOFTWARE:
						degreeString = "SOFTWARE";
						break;
				}
			
			cout << "Degree Program: " << degreeString << endl;
		}

	// Destructor
	Student::~Student()
		{
		
		}