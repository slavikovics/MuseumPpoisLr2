#ifndef EXHIBIT_H
#define EXHIBIT_H

#include "IMuseumItem.h"

namespace MuseumNamespace
{
	class Exhibit : IMuseumItem
	{
	private:

		std::string _description;

		std::string _originCountry;

		int _yearOfFirstAppearingInHistoricalSources;

		bool _isBroken;

	public:

		virtual std::string GetName() override;

		virtual int GetId() override;

		std::string GetDescription();

		void SetDescription(std::string description);

		bool GetBrokenState();

		void Brake();

		std::string GetOriginCountry();

		void SetOriginCountry(std::string originCountry);

		int GetYearOfFirstAppearingInHistoricalSources();

		void SetYearOfFirstAppearingInHistoricalSources(int yearOfFirstAppearingInHistoricalSources);

		Exhibit(int id, std::string name);

		Exhibit(int id, std::string name, std::string _description, std::string _originCountry, int _yearOfFirstAppearingInHistoricalSources);
	};
}

#endif