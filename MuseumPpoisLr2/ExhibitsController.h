#ifndef EXHIBITS_CONTROLLER_H
#define EXHIBITS_CONTROLLER_H
#include "Exhibit.h"
#include "IController.h"
#include <list>

namespace MuseumNamespace
{
	class ExhibitsController : public IController
	{
	private:

		std::list<Exhibit*> _exhibits;

	public:
		
		void AddExhibit(Exhibit* exhibit);

		virtual void RemoveObjectById(int exhibitId);

		virtual void RemoveObjectByName(std::string objectName);

		virtual bool HasObjectWithId(int objectId);

		virtual bool HasObjectWithName(std::string objectName);

		std::string GetAllObjectsData();

		std::list<Exhibit*> GetExhibitsByCountryName(std::string countryName);

		std::list<Exhibit*> GetExhibitsByYearOfFirstAppearing(int yearOfFirstAppearing);

		virtual bool CheckIdIsUniqueAndAcceptable(int id) override;
	};
}

#endif