#ifndef PERSON_H
#define PERSON_H

#include "IMuseumItem.h"

namespace MuseumNamespace
{
	class Person : public IMuseumItem
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

