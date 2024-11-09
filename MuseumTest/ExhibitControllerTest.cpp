#include "pch.h"
#include "../MuseumPpoisLr2/Exhibit.h"
#include "../MuseumPpoisLr2/ExhibitsController.h"

using namespace MuseumNamespace;

TEST(ExhibitsControllerTest, ObjectsRemovalTesting)
{
	Exhibit exhibit1 = Exhibit(1, "", "", "", 0);
	Exhibit exhibit2 = Exhibit(2, "", "", "", 0);;

	ExhibitsController exhibitsController;
	exhibitsController.AddExhibit(&exhibit1);
	exhibitsController.AddExhibit(&exhibit2);
	exhibitsController.RemoveObjectById(1);
	exhibitsController.RemoveObjectByName("");

	EXPECT_EQ(exhibitsController.HasObjectWithId(1), false);
	EXPECT_EQ(exhibitsController.HasObjectWithName(""), false);

	EXPECT_EQ(exhibitsController.GetAllObjectsData(), "exhibits list:\n");

	EXPECT_EQ(exhibitsController.GetExhibitsByCountryName("").size(), 0);
	EXPECT_EQ(exhibitsController.GetExhibitsByYearOfFirstAppearing(0).size(), 0);
}