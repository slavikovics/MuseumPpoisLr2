#include "Visitor.h"

namespace MuseumNamespace
{
	void Visitor::BrakeExhibit()
	{
		_hasBrokenExhibit = true;
		_hasChanges = true;
	}

	void Visitor::SeeExhibit()
	{
		_hasSeenExhibit = true;
		_hasChanges = true;
	}

	void Visitor::BuySouvenir()
	{
		_hasBoughtSouvenir = true;
		_hasChanges = true;
	}

	void Visitor::BuyTicket()
	{
		_hasBoughtTicket = true;
		_hasChanges = true;
	}

	void Visitor::EnterMuseum()
	{
		_hasEnteredMuseum = true;
		_hasChanges = true;
	}

	void Visitor::ExitMuseum()
	{
		_hasExitedMuseum = true;
		_hasChanges = true;
	}

	void Visitor::AskGuide()
	{
		_hasAskedGuide = true;
		_hasChanges = true;
	}

	void Visitor::ThrowLitter()
	{
		_hasThrownLitter = true;
		_hasChanges = true;
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