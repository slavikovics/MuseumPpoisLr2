#include "pch.h"
#include "../MuseumPpoisLr2/Person.h"
using namespace MuseumNamespace;

TEST(PersonTest, ConstructorTest) 
{
	Person person1 = Person("p1", 1);
	Person person2 = Person("p2", 2);

	EXPECT_EQ(person1.GetName(), "p1");
	EXPECT_EQ(person2.GetName(), "p2");

	person1.SetName("newName");
	EXPECT_EQ(person1.GetName(), "newName");

	EXPECT_EQ(person1.GetId(), 1);
	EXPECT_EQ(person2.GetId(), 2);
	EXPECT_TRUE(true);
}