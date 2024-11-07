#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

namespace MuseumNamespace
{
	class Employee : public Person
	{

	protected:

		int _relationToJob;

		double _monthlyWage;

	public:

		const double DefaultMonthlyWage = 300;

		virtual std::string InteractionWithVisitor(Person& visitor);

		virtual std::string GetJobAsString();

		std::string GetRelationToJobAsString();

		int GetRelationToJobAsInt();

		void SetRelationToJob(int newRelationToJob);

		double GetMonthlyWage();

		void SetMonthlyWage(double newMonthlyWage);

		void IncreaseMonthlyWage(double increaseAmount);

		std::string AskAboutJob();

		Employee(std::string name, int id);

		Employee(std::string name, int id, int relationToJob);

		Employee(std::string name, int id, int relationToJob, double monthlyWage);
	};
}

#endif

