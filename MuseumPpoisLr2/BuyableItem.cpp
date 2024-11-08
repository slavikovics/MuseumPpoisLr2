#include "BuyableItem.h"

namespace MuseumNamespace
{
    std::string BuyableItem::GetName()
    {
        return _name;
    }

    int BuyableItem::GetId()
    {
        return _id;
    }

    BuyableItem::BuyableItem(int id, std::string name, double price)
    {
        _id = id;
        _name = name;
        _price = price;  
    }
}


