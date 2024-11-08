#include "BuyableItem.h"

namespace MuseumNamespace
{
    std::string BuyableItem::GetName()
    {
        return std::string();
    }

    int BuyableItem::GetId()
    {
        return 0;
    }

    BuyableItem::BuyableItem(int id, std::string name, double price)
    {
        _id = id;
        _name = name;
        _price = price;  
    }
}


