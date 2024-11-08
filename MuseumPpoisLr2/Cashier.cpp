#include "Cashier.h"

namespace MuseumNamespace
{
	Cashier::Cashier(std::string name, int id, int relationToJob) : Employee(name, id, relationToJob)
	{
	}

	Cashier::Cashier(std::string name, int id) : Employee(name, id)
	{
	}

	std::string Cashier::GetJobAsString()
	{
		return "cashier";
	}

	std::string Cashier::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + ": sells item to a visitor " + visitor.GetName();
	}
}