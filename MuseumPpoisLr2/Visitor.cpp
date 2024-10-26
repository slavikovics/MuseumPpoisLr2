#include "Visitor.h"

namespace MuseumNamespace
{
	void Visitor::BrakeExhibit()
	{
		_hasBrokenExhibit = true;
	}

	void Visitor::BuySouvenir()
	{
		_hasBoughtSouvenir = true;
	}
}