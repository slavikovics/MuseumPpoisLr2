#include "Person.h"

namespace MuseumNamespace
{
	int Person::GetId()
	{
		return _id;
	}

	std::string Person::GetName()
	{
		return _name;
	}

	void Person::SetName(std::string name)
	{
		_name = name;
	}

	Person::Person()
	{

	}

	Person::Person(std::string name, int id)
	{
		_name = name;
		_id = id;
	}
}