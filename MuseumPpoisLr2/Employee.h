#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

namespace MuseumNamespace
{
	class Employee : public Person
	{

	private:

		int _relationToJob;

	public:

		virtual std::string InteractionWithVisitor(Person& visitor);

		virtual std::string GetJobAsString();

		std::string GetRelationToJobAsString();

		int GetRelationToJobAsInt();

		std::string AskAboutJob();

		Employee(std::string name, int id);

		Employee(std::string name, int id, int relationToJob);
	};
}

#endif

