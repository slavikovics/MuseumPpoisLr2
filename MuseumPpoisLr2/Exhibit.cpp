#include "Exhibit.h"

namespace MuseumNamespace
{
	std::string Exhibit::GetName()
	{
		return _name;
	}

	int Exhibit::GetId()
	{
		return _id;
	}

	std::string Exhibit::GetDescription()
	{
		return _description;
	}

	void Exhibit::SetDescription(std::string description)
	{
		_description = description;
	}

	std::string Exhibit::GetOriginCountry()
	{
		return _originCountry;
	}

	void Exhibit::SetOriginCountry(std::string originCountry)
	{
		_originCountry = originCountry;
	}

	int Exhibit::GetYearOfFirstAppearingInHistoricalSources()
	{
		return _yearOfFirstAppearingInHistoricalSources;
	}

	void Exhibit::SetYearOfFirstAppearingInHistoricalSources(int yearOfFirstAppearingInHistoricalSources)
	{
		_yearOfFirstAppearingInHistoricalSources = yearOfFirstAppearingInHistoricalSources;
	}

	Exhibit::Exhibit(int id, std::string name)
	{
		_id = id;
		_name = name;
	}

	Exhibit::Exhibit(int id, std::string name, std::string description, std::string originCountry, int yearOfFirstAppearingInHistoricalSources)
	{
		_id = id;
		_name = name;
		_description = description;
		_originCountry = originCountry;
		_yearOfFirstAppearingInHistoricalSources = yearOfFirstAppearingInHistoricalSources;
	}
}


