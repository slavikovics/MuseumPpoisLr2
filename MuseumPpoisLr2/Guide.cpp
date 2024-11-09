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
		return GuideJobString;
	}

	std::string Guide::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + GuideResponse + visitor.GetName();
	}
}