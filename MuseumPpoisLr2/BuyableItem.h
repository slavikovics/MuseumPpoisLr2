#ifndef BUYABLE_ITEM_H
#define BUYABLE_ITEM_H

#include "IMuseumItem.h"

namespace MuseumNamespace
{
	class BuyableItem : IMuseumItem
	{
	public:

		virtual std::string GetName() override;

		virtual int GetId() override;

		double _price;

		BuyableItem(int id, std::string name, double price);
	};
}

#endif
