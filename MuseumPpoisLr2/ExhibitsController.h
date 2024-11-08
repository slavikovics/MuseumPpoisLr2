#ifndef EXHIBITS_CONTROLLER_H
#define EXHIBITS_CONTROLLER_H
#include "Exhibit.h"
#include <list>

namespace MuseumNamespace
{
	class ExhibitsController
	{
	private:

		std::list<Exhibit*> _exhibits;

	public:
		
		void AddExhibit(Exhibit* exhibit);

		void RemoveExhibitById(int exhibitId);

		std::string GetAllExhibitsData();

		std::list<Exhibit*> GetExhibitsByCountryName(std::string countryName);

		std::list<Exhibit*> GetExhibitsByYearOfFirstAppearing(std::string yearOfFirstAppearing);


	};
}

#endif