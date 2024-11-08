#include "Visitor.h"

namespace MuseumNamespace
{
	std::string Visitor::BrakeExhibit(Exhibit& exhibit)
	{
		_hasBrokenExhibit = true;
		exhibit.Brake();
		return GetName() + " broke exhibit";
	}

	std::string Visitor::BuySouvenir(BuyableItem& souvenir, BankAccount& bankAccount)
	{
		_hasBoughtSouvenir = true;
		bankAccount.IncreaseBalance(souvenir._price);
		return GetName() + " bought souvenir";
	}

	std::string Visitor::BuyTicket(const BuyableItem& ticket, BankAccount& bankAccount)
	{
		_hasBoughtTicket = true;
		bankAccount.IncreaseBalance(ticket._price);
		return GetName() + " bought ticket";
	}

	std::string Visitor::AskGuide()
	{
		_hasAskedGuide = true;
		return GetName() + " asked guide";
	}

	std::string Visitor::ThrowLitter()
	{
		_hasThrownLitter = true;
		return GetName() + " threw litter";
	}

	std::string Visitor::GetVisitorData()
	{
		return "Visitor: my id is: " + std::to_string(GetId()) + ", my Name is: "
			+ GetName() + ".\n";
	}

	bool Visitor::operator==(const Visitor& visitor) const
	{
		if (_name == visitor._name && _id == visitor._id) return true;
		return false;
	}

	bool Visitor::operator!=(const Visitor& visitor)
	{
		return !Visitor::operator==(visitor);
	}

	Visitor& Visitor::operator=(const Visitor& visitor)
	{
		Visitor newVisitor(visitor._name, visitor._id);
		return newVisitor;
	}

	Visitor::Visitor(std::string name, int id)
	{
		_name = name;
		_id = id;
		_hasBrokenExhibit = false;
		_hasBoughtSouvenir = false;
		_hasBoughtTicket = false;
		_hasAskedGuide = false;
		_hasThrownLitter = false;
	}
}