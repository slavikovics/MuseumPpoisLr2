#ifndef VISITOR_H
#define VISITOR_H

#include "Person.h"
#include "Exhibit.h"
#include "BuyableItem.h"
#include "Guide.h"
#include "BankAccount.h"

namespace MuseumNamespace
{
	class Visitor : public Person
	{
	public:

		bool _hasThrownLitter;

		bool _hasBrokenExhibit;

		bool _hasBoughtSouvenir;

		bool _hasBoughtTicket;

		bool _hasAskedGuide;

		std::string ThrowLitter();

		std::string BrakeExhibit(Exhibit& exhibit);

		std::string BuySouvenir(BuyableItem& souvenir, BankAccount& bankAccount);

		std::string BuyTicket(const BuyableItem& ticket, BankAccount& bankAccount);

		std::string AskGuide();

		std::string GetVisitorData();

		bool operator==(const Visitor& visitor)const;

		bool operator!=(const Visitor& visitor);

		Visitor& operator=(const Visitor& visitor);

		Visitor(std::string name, int id);
	};
}

#endif

