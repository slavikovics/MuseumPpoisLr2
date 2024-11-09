#include "pch.h"
#include "../MuseumPpoisLr2/Visitor.h"
#include "../MuseumPpoisLr2/Museum.h"

using namespace MuseumNamespace;

TEST(VisitorTest, OperatorEqualTest) 
{
	Visitor visitor1 = Visitor("v1", 1);
	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_FALSE(visitor1 == visitor2);
	Visitor visitor3 = Visitor("v1", 1);
	EXPECT_TRUE(visitor1 == visitor3);
}

TEST(VisitorTest, OperatorNotEqualTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_TRUE(visitor1 != visitor2);
	Visitor visitor3 = Visitor("v1", 1);
	EXPECT_FALSE(visitor1 != visitor3);
}

TEST(VisitorTest, OperatorCopyTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	Visitor visitor2 = visitor1;
	EXPECT_EQ(visitor1.GetId(), visitor2.GetId());
	EXPECT_EQ(visitor1.GetName(), visitor2.GetName());
}

TEST(VisitorTest, GetVisitorDataTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	Visitor visitor2 = visitor1;
	EXPECT_EQ(visitor1.GetVisitorData(), "Visitor: my id is: 1, my Name is: v1.\n");
	EXPECT_EQ(visitor2.GetVisitorData(), "Visitor: my id is: 1, my Name is: v1.\n");
}

TEST(VisitorTest, ThrowLitterTest)
{
	Museum museum;
	Visitor visitor1 = Visitor("v1", 1);
	museum.visitorsController.AddVisitor(&visitor1);
	EXPECT_EQ(visitor1.ThrowLitter(), "v1 threw litter");
	museum.UpdateVisitorsStatuses();

	Visitor visitor2 = Visitor("v2", 2);
	museum.visitorsController.AddVisitor(&visitor2);
	EXPECT_EQ(visitor2.ThrowLitter(), "v2 threw litter");
	museum.UpdateVisitorsStatuses();
}

TEST(VisitorTest, AskGuideTest)
{
	Museum museum;
	Visitor visitor1 = Visitor("v1", 1);
	museum.visitorsController.AddVisitor(&visitor1);
	EXPECT_EQ(visitor1.AskGuide(), "v1 asked guide");
	museum.UpdateVisitorsStatuses();

	Visitor visitor2 = Visitor("v2", 2);
	museum.visitorsController.AddVisitor(&visitor2);
	EXPECT_EQ(visitor2.AskGuide(), "v2 asked guide");
	museum.UpdateVisitorsStatuses();
}

TEST(VisitorTest, BuyTicketTest)
{
	Museum museum;
	BuyableItem buyableItem = BuyableItem(1, "", 20);
	std::string buyableItemName = buyableItem.GetName();
	int buyableItemId = buyableItem.GetId();

	Visitor visitor1 = Visitor("v1", 1);
	museum.visitorsController.AddVisitor(&visitor1);
	EXPECT_EQ(visitor1.BuyTicket(buyableItem, museum.bankAccount), "v1 bought ticket");

	Visitor visitor2 = Visitor("v2", 2);
	museum.visitorsController.AddVisitor(&visitor2);
	EXPECT_EQ(visitor2.BuyTicket(buyableItem, museum.bankAccount), "v2 bought ticket");
}

TEST(VisitorTest, BuySouvenirTest)
{
	Museum museum;
	BuyableItem buyableItem = BuyableItem(1, "", 30);

	Visitor visitor1 = Visitor("v1", 1);
	museum.visitorsController.AddVisitor(&visitor1);
	EXPECT_EQ(visitor1.BuySouvenir(buyableItem, museum.bankAccount), "v1 bought souvenir");

	Visitor visitor2 = Visitor("v2", 2);
	museum.visitorsController.AddVisitor(&visitor2);
	EXPECT_EQ(visitor2.BuySouvenir(buyableItem, museum.bankAccount), "v2 bought souvenir");
}

TEST(VisitorTest, BrakeExhibitTest)
{
	Museum museum;
	Exhibit* exhibit1 = new Exhibit(1, "");
	Exhibit* exhibit2 = new Exhibit(2, "");

	museum.exhibitsController.AddExhibit(exhibit1);
	museum.exhibitsController.AddExhibit(exhibit2);

	Visitor visitor1 = Visitor("v1", 1);
	museum.visitorsController.AddVisitor(&visitor1);
	EXPECT_EQ(visitor1.BrakeExhibit(*exhibit1), "v1 broke exhibit");
	museum.UpdateVisitorsStatuses();

	Visitor visitor2 = Visitor("v2", 2);
	museum.visitorsController.AddVisitor(&visitor2);
	EXPECT_EQ(visitor2.BrakeExhibit(*exhibit2), "v2 broke exhibit");
	museum.UpdateVisitorsStatuses();
}
