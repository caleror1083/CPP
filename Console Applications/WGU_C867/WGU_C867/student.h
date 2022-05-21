/* C867 Scripting and Programming - Applications
   Robert Calero
   Student ID# 000998416
*/

#pragma once
#include <string>
#include "degree.h"

using namespace std;

class Student
	{
		protected:
			string studentId, firstName, lastName, emailAddress;
			int age;
			int* daysToComplete;
			Degree degree;
		public:
			const static int daysInCourseArraySize = 3;

			// Constructors
			Student();
			Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], Degree degree);
	
			// Accessors (i.e Getters)
			string getStudentId() const;
			string getFirstName() const;
			string getLastName() const;
			string getEmailAddress() const;
			int getAge() const;
			int* getDaysToComplete() const;
			virtual Degree getDegree() = 0;

			// Mutators (i.e. Setters)
			void setStudentId(string studentId);
			void setFirstName(string firstName);
			void setLastName(string lastName);
			void setEmailAddress(string emailAddress);
			void setAge(int age);
			void setDaysToComplete(int daysToComplete[]);
			void setDegree(Degree degree);

			virtual void print();

			~Student();	// destructor
	};