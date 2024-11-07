#include "Guide.h"

namespace MuseumNamespace
{
	Guide::Guide(std::string name, int id, int relationToJob) : Employee(name, id, relationToJob)
	{
	}

	Guide::Guide(std::string name, int id) : Employee(name, id)
	{
	}

	std::string Guide::GetJobAsString()
	{
		return "guide";
	}

	std::string Guide::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + ": shows exhibit to a visitor " + visitor.GetName();
	}
}