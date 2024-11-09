#include "Cleaner.h"

namespace MuseumNamespace
{
	Cleaner::Cleaner(std::string name, int id, int relationToJob) : Employee(name, id, relationToJob)
	{
	}

	Cleaner::Cleaner(std::string name, int id) : Employee(name, id)
	{
	}

	std::string Cleaner::GetJobAsString()
	{
		return CleanerJobString;
	}

	std::string Cleaner::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + CleanerResponse + visitor.GetName();
	}
}