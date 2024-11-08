#include "pch.h"
#include "../MuseumPpoisLr2/VisitorsController.h"
#include "../MuseumPpoisLr2/IdNotAcceptableException.h"
#include <string>

using namespace MuseumNamespace;

TEST(VisitorsControllerTest, AddingVisitorsTest)
{
	Visitor* e1 = new Visitor("e1", 1);
	Visitor* e2 = new Visitor("e2", 2);
	Visitor* e3 = new Visitor("e3", 1);

	VisitorsController employeesController = VisitorsController();
	employeesController.AddVisitor(e1);
	employeesController.AddVisitor(e2);

	try
	{
		employeesController.AddVisitor(e3);
	}
	catch (IdNotAcceptableException exception)
	{
		EXPECT_EQ(exception.GetMessage(), "Person e3 with id 1 is not acceptable.");
	}
}

TEST(VisitorsControllerTest, HasVisitorWithIdTest)
{
	Visitor* e1 = new Visitor("e1", 1);
	Visitor* e2 = new Visitor("e2", 2);
	Visitor* e3 = new Visitor("e3", 1);

	VisitorsController employeesController = VisitorsController();
	employeesController.AddVisitor(e1);
	employeesController.AddVisitor(e2);

	EXPECT_EQ(employeesController.HasObjectWithId(1), true);
	EXPECT_EQ(employeesController.HasObjectWithId(10), false);

	EXPECT_EQ(employeesController.HasObjectWithName("e2"), true);
	EXPECT_EQ(employeesController.HasObjectWithName("e3"), false);
}

TEST(VisitorsControllerTest, GetAllVisitorsTest)
{
	Visitor* e1 = new Visitor("e1", 1);
	Visitor* e2 = new Visitor("e2", 2);
	Visitor* e3 = new Visitor("e3", 1);

	VisitorsController employeesController = VisitorsController();
	employeesController.AddVisitor(e1);
	employeesController.AddVisitor(e2);

	EXPECT_EQ(employeesController.GetAllVisitors().size(), 2);
}

TEST(VisitorsControllerTest, GetAllVisitorsDataTest)
{
	Visitor* e1 = new Visitor("e1", 1);
	Visitor* e2 = new Visitor("e2", 2);
	Visitor* e3 = new Visitor("e3", 1);

	VisitorsController employeesController = VisitorsController();
	employeesController.AddVisitor(e1);
	employeesController.AddVisitor(e2);

	EXPECT_EQ(employeesController.GetAllObjectsData(), "visitors list:\n" + e1->GetVisitorData() + e2->GetVisitorData());
}

TEST(VisitorsControllerTest, RemoveVisitorTest)
{
	Visitor* e1 = new Visitor("e1", 1);
	Visitor* e2 = new Visitor("e2", 2);
	Visitor* e3 = new Visitor("e3", 1);

	VisitorsController employeesController = VisitorsController();
	employeesController.AddVisitor(e1);
	employeesController.AddVisitor(e2);

	employeesController.RemoveObjectById(1);

	EXPECT_EQ(employeesController.HasObjectWithId(1), false);
	EXPECT_EQ(employeesController.HasObjectWithId(2), true);

	EXPECT_EQ(employeesController.HasObjectWithName("e1"), false);
	EXPECT_EQ(employeesController.HasObjectWithName("e2"), true);
}