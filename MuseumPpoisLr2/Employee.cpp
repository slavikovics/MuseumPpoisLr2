#include "Employee.h"

namespace MuseumNamespace
{
	std::string Employee::IteractionWithVisitor()
	{
		return "no interaction with visitor ";
	}

	Jobs Employee::GetJob()
	{
		return _job;
	}

	Employee::Employee(std::string name, int id)
	{
		_name = name;
		_id = id;
		_job = NoJob;
	}

	Employee::Employee(std::string name, int id, Jobs job)
	{
		_name = name;
		_id = id;
		_job = job;
	}

	int Employee::GetId()
	{
		return _id;
	}

	std::string Employee::GetName()
	{
		return _name;
	}
}