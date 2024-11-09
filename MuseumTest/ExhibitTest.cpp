#include "pch.h"
#include "../MuseumPpoisLr2/Exhibit.h"

using namespace MuseumNamespace;

TEST(ExhibitTest, OperatorsTesting)
{
	Exhibit exhibit1 = Exhibit(1, "", "", "", 0);
	Exhibit exhibit2 = exhibit1;

	EXPECT_EQ(exhibit1.GetDescription(), exhibit2.GetDescription());
	EXPECT_EQ(exhibit1.GetBrokenState(), exhibit2.GetBrokenState());
	EXPECT_EQ(exhibit1.GetOriginCountry(), exhibit2.GetOriginCountry());
	EXPECT_EQ(exhibit1.GetYearOfFirstAppearingInHistoricalSources(), exhibit2.GetYearOfFirstAppearingInHistoricalSources());
	EXPECT_EQ(exhibit1 == exhibit2, true);
	EXPECT_EQ(exhibit1 != exhibit2, false);
}