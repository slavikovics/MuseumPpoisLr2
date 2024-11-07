#pragma once
#include "Person.h"

namespace MuseumNamespace
{
	class Visitor : public Person
	{
	private:

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

		void ThrowLitter();

		void BrakeExhibit();

		void SeeExhibit();

		void BuySouvenir();

		void BuyTicket();

		void EnterMuseum();

		void ExitMuseum();

		void AskGuide();

		Visitor(std::string name, int id);
	};
}



