#include "Visitor.h"

namespace MuseumNamespace
{
	std::string Visitor::BrakeExhibit()
	{
		_hasBrokenExhibit = true;
		_hasChanges = true;
		return GetName() + " broke exhibit";
	}

	std::string Visitor::SeeExhibit()
	{
		_hasSeenExhibit = true;
		_hasChanges = true;
		return GetName() + " saw exhibit";
	}

	std::string Visitor::BuySouvenir()
	{
		_hasBoughtSouvenir = true;
		_hasChanges = true;
		return GetName() + " bought souvenir";
	}

	std::string Visitor::BuyTicket()
	{
		_hasBoughtTicket = true;
		_hasChanges = true;
		return GetName() + " bought ticket";
	}

	std::string Visitor::EnterMuseum()
	{
		_hasEnteredMuseum = true;
		_hasChanges = true;
		return GetName() + " entered museum";
	}

	std::string Visitor::ExitMuseum()
	{
		_hasExitedMuseum = true;
		_hasChanges = true;
		return GetName() + " exited museum";
	}

	std::string Visitor::AskGuide()
	{
		_hasAskedGuide = true;
		_hasChanges = true;
		return GetName() + " asked guide";
	}

	std::string Visitor::ThrowLitter()
	{
		_hasThrownLitter = true;
		_hasChanges = true;
		return GetName() + " threw litter";
	}

	Visitor::Visitor(std::string name, int id)
	{
		_name = name;
		_id = id;
		_hasBrokenExhibit = false;
		_hasBoughtSouvenir = false;
		_hasBoughtTicket = false;
		_hasEnteredMuseum = false;
		_hasExitedMuseum = false;
		_hasAskedGuide = false;
		_hasThrownLitter = false;
		_hasChanges = false;
		_hasSeenExhibit = true;
	}
}