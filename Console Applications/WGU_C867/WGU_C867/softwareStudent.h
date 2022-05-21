/* C867 Scripting and Programming - Applications
   Robert Calero
   Student ID# 000998416
*/

#pragma once
#include "degree.h"
#include "student.h"

class SoftwareStudent : public Student
	{
		protected:
			Degree degree = Degree::SOFTWARE;
		public:
			using Student::Student;
			Degree getDegree() override;
	};