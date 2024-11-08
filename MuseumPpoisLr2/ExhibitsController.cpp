#include "ExhibitsController.h"
#include "IdNotAcceptableException.h"

namespace MuseumNamespace
{
	void ExhibitsController::AddExhibit(Exhibit* exhibit)
	{
		if (!CheckIdIsUniqueAndAcceptable(exhibit->GetId()))
		{
			throw IdNotAcceptableException(exhibit->GetId(), exhibit->GetName());
		}
		_exhibits.push_back(exhibit);
	}

	void ExhibitsController::RemoveObjectById(int exhibitId)
	{
		for (Exhibit* exhibit : _exhibits)
		{
			if (exhibit->GetId() == exhibitId)
			{
				_exhibits.remove(exhibit);
				return;
			}
		}
	}

	void ExhibitsController::RemoveObjectByName(std::string objectName)
	{
		for (Exhibit* exhibit : _exhibits)
		{
			if (exhibit->GetName() == objectName)
			{
				_exhibits.remove(exhibit);
				return;
			}
		}
	}

	bool ExhibitsController::HasObjectWithId(int objectId)
	{
		for (Exhibit* exhibit : _exhibits)
		{
			if (exhibit->GetId() == objectId)
			{
				return true;
			}
		}
		return false;
	}

	bool ExhibitsController::HasObjectWithName(std::string objectName)
	{
		for (Exhibit* exhibit : _exhibits)
		{
			if (exhibit->GetName() == objectName)
			{
				return true;
			}
		}
		return false;
	}

	std::string ExhibitsController::GetAllObjectsData()
	{
		std::string output = "exhibits list:\n";

		for (Exhibit* exhibit : _exhibits)
		{
			output += exhibit->GetExhibitData();
		}

		return output;
	}

	std::list<Exhibit*> ExhibitsController::GetExhibitsByCountryName(std::string countryName)
	{
		std::list<Exhibit*> exhibits;

		for (Exhibit* exhibit : _exhibits)
		{
			if (exhibit->GetOriginCountry() == countryName)
			{
				exhibits.push_back(exhibit);
			}
		}

		return exhibits;
	}

	std::list<Exhibit*> ExhibitsController::GetExhibitsByYearOfFirstAppearing(int yearOfFirstAppearing)
	{
		std::list<Exhibit*> exhibits;

		for (Exhibit* exhibit : _exhibits)
		{
			if (exhibit->GetYearOfFirstAppearingInHistoricalSources() == yearOfFirstAppearing)
			{
				exhibits.push_back(exhibit);
			}
		}

		return exhibits;
	}

	bool ExhibitsController::CheckIdIsUniqueAndAcceptable(int id)
	{
		if (id <= 0) return false;
		return !HasObjectWithId(id);
	}
}


