#include "Guard.h"

namespace MuseumNamespace
{	
	Guard::Guard(std::string name, int id, int relationToJob) : Employee(name, id, relationToJob)
	{
	}


	Guard::Guard(std::string name, int id) : Employee(name, id)
	{
	}	

	std::string Guard::GetJobAsString()
	{
		return "guard";
	}

	std::string Guard::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + ": takes out of the museum visitor " + visitor.GetName();
	}
}