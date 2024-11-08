#include "pch.h"
#include "../MuseumPpoisLr2/EmployeesController.h"
#include "../MuseumPpoisLr2/IdNotAcceptableException.h"
#include <string>

using namespace MuseumNamespace;

TEST(EmployeesControllerTest, AddingEmployeesTest)
{
	Employee* e1 = new Employee("e1", 1, 1, 200);
	Employee* e2 = new Employee("e2", 2, 2, 300);
	Employee* e3 = new Employee("e3", 1, 1, 300);

	EmployeesController employeesController = EmployeesController();
	employeesController.AddEmployee(e1);
	employeesController.AddEmployee(e2);

	try
	{
		employeesController.AddEmployee(e3);
	}
	catch (IdNotAcceptableException exception)
	{
		EXPECT_EQ(exception.GetMessage(), "Person e3 with id 1 is not acceptable.");
	}
}

TEST(EmployeesControllerTest, HasEmployeeWithIdTest)
{
	Employee* e1 = new Employee("e1", 1, 1, 200);
	Employee* e2 = new Employee("e2", 2, 2, 300);
	Employee* e3 = new Employee("e3", 1, 1, 300);

	EmployeesController employeesController = EmployeesController();
	employeesController.AddEmployee(e1);
	employeesController.AddEmployee(e2);

	EXPECT_EQ(employeesController.HasObjectWithId(1), true);
	EXPECT_EQ(employeesController.HasObjectWithId(10), false);

	EXPECT_EQ(employeesController.HasObjectWithName("e2"), true);
	EXPECT_EQ(employeesController.HasObjectWithName("e3"), false);
}

TEST(EmployeesControllerTest, GetAllEmployeesTest)
{
	Employee* e1 = new Employee("e1", 1, 1, 200);
	Employee* e2 = new Employee("e2", 2, 2, 300);
	Employee* e3 = new Employee("e3", 1, 1, 300);

	EmployeesController employeesController = EmployeesController();
	employeesController.AddEmployee(e1);
	employeesController.AddEmployee(e2);

	EXPECT_EQ(employeesController.GetAllEmployees().size(), 2);
}

TEST(EmployeesControllerTest, GetAllEmployeesDataTest)
{
	Employee* e1 = new Employee("e1", 1, 1, 200);
	Employee* e2 = new Employee("e2", 2, 2, 300);
	Employee* e3 = new Employee("e3", 1, 1, 300);

	EmployeesController employeesController = EmployeesController();
	employeesController.AddEmployee(e1);
	employeesController.AddEmployee(e2);

	EXPECT_EQ(employeesController.GetAllObjectsData(), "employees list:\n" + e1->GetEmployeeData() + e2->GetEmployeeData());
}

TEST(EmployeesControllerTest, RemoveEmployeeTest)
{
	Employee* e1 = new Employee("e1", 1, 1, 200);
	Employee* e2 = new Employee("e2", 2, 2, 300);
	Employee* e3 = new Employee("e3", 1, 1, 300);

	EmployeesController employeesController = EmployeesController();
	employeesController.AddEmployee(e1);
	employeesController.AddEmployee(e2);

	employeesController.RemoveObjectById(1);

	EXPECT_EQ(employeesController.HasObjectWithId(1), false);
	EXPECT_EQ(employeesController.HasObjectWithId(2), true);

	EXPECT_EQ(employeesController.HasObjectWithName("e1"), false);
	EXPECT_EQ(employeesController.HasObjectWithName("e2"), true);
}