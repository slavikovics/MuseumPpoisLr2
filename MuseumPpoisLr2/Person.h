#ifndef PERSON_H
#define PERSON_H

#include "IPerson.h"

namespace MuseumNamespace
{
	class Person : public IPerson
	{
	public:

		int GetId() override;

		std::string GetName() override;

		void SetName(std::string name);

		Person();

		Person(std::string name, int id);
	};
}

#endif

