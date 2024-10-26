#pragma once
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



