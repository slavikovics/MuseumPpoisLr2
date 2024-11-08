#include "ExhibitsController.h"

namespace MuseumNamespace
{
	void ExhibitsController::AddExhibit(Exhibit* exhibit)
	{
		_exhibits.push_back(exhibit);
	}

	void ExhibitsController::RemoveExhibitById(int exhibitId)
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

	std::string ExhibitsController::GetAllExhibitsData()
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
		return std::list<Exhibit*>();
	}

	std::list<Exhibit*> ExhibitsController::GetExhibitsByYearOfFirstAppearing(std::string yearOfFirstAppearing)
	{
		return std::list<Exhibit*>();
	}

}


