#include "pch.h"
#include "../MuseumPpoisLr2/Visitor.h"
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
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.ThrowLitter(), "v1 threw litter");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.ThrowLitter(), "v2 threw litter");
}

TEST(VisitorTest, AskGuideTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.AskGuide(), "v1 asked guide");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.AskGuide(), "v2 asked guide");
}

TEST(VisitorTest, ExitMuseumTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.ExitMuseum(), "v1 exited museum");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.ExitMuseum(), "v2 exited museum");
}

TEST(VisitorTest, EnterMuseumTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.EnterMuseum(), "v1 entered museum");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.EnterMuseum(), "v2 entered museum");
}

TEST(VisitorTest, BuyTicketTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.BuyTicket(), "v1 bought ticket");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.BuyTicket(), "v2 bought ticket");
}

TEST(VisitorTest, BuySouvenirTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.BuySouvenir(), "v1 bought souvenir");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.BuySouvenir(), "v2 bought souvenir");
}

TEST(VisitorTest, SeeExhibitTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.SeeExhibit(), "v1 saw exhibit");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.SeeExhibit(), "v2 saw exhibit");
}

TEST(VisitorTest, BrakeExhibitTest)
{
	Visitor visitor1 = Visitor("v1", 1);
	EXPECT_EQ(visitor1.BrakeExhibit(), "v1 broke exhibit");

	Visitor visitor2 = Visitor("v2", 2);
	EXPECT_EQ(visitor2.BrakeExhibit(), "v2 broke exhibit");
}
