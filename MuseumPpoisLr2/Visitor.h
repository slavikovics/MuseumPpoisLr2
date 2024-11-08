#pragma once
#include "Person.h"

namespace MuseumNamespace
{
	class Visitor : public Person
	{
	protected:

		bool _hasChanges;

		bool _hasThrownLitter;

		bool _hasBrokenExhibit;

		bool _hasBoughtSouvenir;

		bool _hasSeenExhibit;

		bool _hasBoughtTicket;

		bool _hasEnteredMuseum;

		bool _hasExitedMuseum;

		bool _hasAskedGuide;

	public:

		std::string ThrowLitter();

		std::string BrakeExhibit();

		std::string SeeExhibit();

		std::string BuySouvenir();

		std::string BuyTicket();

		std::string EnterMuseum();

		std::string ExitMuseum();

		std::string AskGuide();

		std::string GetVisitorData();

		bool operator==(const Visitor& visitor)const;

		bool operator!=(const Visitor& visitor);

		Visitor& operator=(const Visitor& visitor);

		Visitor(std::string name, int id);
	};
}



