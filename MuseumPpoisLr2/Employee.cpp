#include "Employee.h"

namespace MuseumNamespace
{
	void Employee::IteractionWithVisitor()
	{

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

	int Employee::GetId()
	{
		return _id;
	}

	std::string Employee::GetName()
	{
		return _name;
	}
}