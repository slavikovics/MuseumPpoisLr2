#ifndef IPERSON_H
#define IPERSON_H

#include <string>

namespace MuseumNamespace
{
	class IPerson
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

