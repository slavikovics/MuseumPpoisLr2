#include "pch.h"
#include "../MuseumPpoisLr2/BankAccount.h"
#include "../MuseumPpoisLr2/Museum.h"

using namespace MuseumNamespace;

TEST(EmployeesTest, CashierTest)
{
	Employee* employee = new Cashier("Jane", 1, 3);
	Visitor visitor = Visitor("Kate", 1);

	EXPECT_EQ((*employee).GetJobAsString(), "cashier");
	EXPECT_EQ((*employee).InteractionWithVisitor(visitor), "Jane: sells item to a visitor Kate");
}

TEST(EmployeesTest, CleanerTest)
{
	Employee* employee = new Cleaner("Jane", 1, 3);
	Visitor visitor = Visitor("Kate", 1);

	EXPECT_EQ((*employee).GetJobAsString(), "cleaner");
	EXPECT_EQ((*employee).InteractionWithVisitor(visitor), "Jane: cleans litter after a visitor Kate");
}

TEST(EmployeesTest, EmployeeTest)
{
	Employee* employee1 = new Employee();
	Employee* employee2 = new Employee();
	Visitor visitor = Visitor("Kate", 1);

	employee1->SetRelationToJob(0);
	EXPECT_EQ(employee1->GetRelationToJobAsString(), "hate");
	EXPECT_EQ(employee1->GetRelationToJobAsInt(), 0);

	employee1->SetRelationToJob(3);
	EXPECT_EQ(employee1->GetRelationToJobAsString(), "feel good about");
	employee1->SetRelationToJob(4);
	EXPECT_EQ(employee1->GetRelationToJobAsString(), "love");
	employee1->SetRelationToJob(5);
	EXPECT_EQ(employee1->GetRelationToJobAsString(), "undefined");

	employee1->SetMonthlyWage(5000);
	EXPECT_EQ(employee1->GetMonthlyWage(), 5000);

	employee2->IncreaseMonthlyWage(4700);
	EXPECT_EQ(employee1->GetMonthlyWage(), employee2->GetMonthlyWage());

	EXPECT_EQ(employee1 == employee2, false);
	EXPECT_EQ(employee1 != employee2, true);
	employee1 = employee2;
	EXPECT_EQ(employee1 == employee2, true);

	EXPECT_EQ((*employee1).GetJobAsString(), "any");
	EXPECT_EQ((*employee1).InteractionWithVisitor(visitor), ": no interaction with visitor Kate");
}

TEST(EmployeesTest, GuardTest)
{
	Employee* employee = new Guard("Jane", 1, 3);
	Visitor visitor = Visitor("Kate", 1);

	EXPECT_EQ((*employee).GetJobAsString(), "guard");
	EXPECT_EQ((*employee).InteractionWithVisitor(visitor), "Jane: takes out of the museum visitor Kate");
}

TEST(EmployeesTest, GuideTest)
{
	Employee* employee = new Guide("Jane", 1, 3);
	Visitor visitor = Visitor("Kate", 1);

	EXPECT_EQ((*employee).GetJobAsString(), "guide");
	EXPECT_EQ((*employee).InteractionWithVisitor(visitor), "Jane: shows exhibit to a visitor Kate");
}