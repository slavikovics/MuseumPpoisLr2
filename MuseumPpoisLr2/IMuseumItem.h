#ifndef I_MUSEUM_ITEM_H
#define I_MUSEUM_ITEM_H

#include <string>

namespace MuseumNamespace
{
	class IMuseumItem
	{
	protected:

		std::string _name;

		int _id;

	public:

		virtual std::string GetName() = 0;

		virtual int GetId() = 0;

	};
}

#endif

