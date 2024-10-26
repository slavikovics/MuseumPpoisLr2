#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "IPerson.h"
#include "jobs.h"

namespace MuseumNamespace
{
	class Employee : public IPerson
	{

	protected:

		Jobs _job;

	public:

		virtual std::string IteractionWithVisitor();

		Jobs GetJob();

		Employee(std::string name, int id);

		Employee(std::string name, int id, Jobs job);

		virtual int GetId() override;

		virtual std::string GetName() override;
	};
}

#endif

