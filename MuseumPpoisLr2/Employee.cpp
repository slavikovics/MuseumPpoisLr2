#include "Employee.h"

namespace MuseumNamespace
{
	std::string Employee::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + ": no interaction with visitor " + visitor.GetName();
	}

	std::string Employee::AskAboutJob()
	{
		return "I " + GetRelationToJobAsString() + " my job.";
	}

	std::string Employee::GetJobAsString()
	{
		return "any";
	}

	std::string Employee::GetRelationToJobAsString()
	{
		switch (_relationToJob)
		{
			case 0: return "hate";
			case 1: return "dislike";
			case 2: return "am indifferent";
			case 3: return "feel good about";
			case 4: return "love";
		}
	}

	int Employee::GetRelationToJobAsInt()
	{
		return _relationToJob;
	}

	Employee::Employee(std::string name, int id)
	{
		_name = name;
		_id = id;
		_relationToJob = 2;	
	}

	Employee::Employee(std::string name, int id, int relationToJob)
	{
		_name = name;
		_id = id;
		_relationToJob = relationToJob;
	}
}