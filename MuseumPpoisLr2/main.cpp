#include <iostream>
#include "Employee.h"
#include "Guard.h"
#include "Cashier.h"
#include "Visitor.h"
#include "EmployeesController.h"

using namespace MuseumNamespace;

int main()
{
	Employee employee1("Greg", 1);
	std::cout << "name: " << employee1.GetName() << std::endl;
	std::cout << "id: " << employee1.GetId() << std::endl;
	std::cout << "job: " << employee1.AskAboutJob() << std::endl << std::endl;

	Employee employee2("Kate", 2, 4);
	std::cout << "name: " << employee2.GetName() << std::endl;
	std::cout << "id: " << employee2.GetId() << std::endl;
	std::cout << "job: " << employee2.AskAboutJob() << std::endl << std::endl;

	Person person("Alex", 3);
	std::cout << employee1.InteractionWithVisitor(person) << std::endl;
	std::cout << employee2.InteractionWithVisitor(person) << std::endl << std::endl;

	Cashier cashier("Jeffrey", 4, 1);
	std::cout << "name: " << cashier.GetName() << std::endl;
	std::cout << "id: " << cashier.GetId() << std::endl;
	std::cout << "job: " << cashier.AskAboutJob() << std::endl << std::endl;
	std::cout << cashier.InteractionWithVisitor(person) << std::endl << std::endl;

	Visitor visitor("Jane", 1);

	std::cout << cashier.InteractionWithVisitor(visitor) << std::endl;
	std::cout << visitor.BrakeExhibit() << std::endl;

	EmployeesController employeesController = EmployeesController();
	employeesController.AddEmployee(cashier);
	employeesController.AddEmployee(employee1);
	employeesController.AddEmployee(employee2);
	std::cout << employeesController.GetAllEmployeesData() << std::endl;

	return 0;
}