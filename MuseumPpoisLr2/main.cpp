#include <iostream>
#include "Employee.h"
#include "Guard.h"

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

	Guard guard("Jeffrey", 4, 1);
	std::cout << "name: " << guard.GetName() << std::endl;
	std::cout << "id: " << guard.GetId() << std::endl;
	std::cout << "job: " << guard.AskAboutJob() << std::endl << std::endl;
	std::cout << guard.InteractionWithVisitor(person) << std::endl << std::endl;;

	std::cout << person.GetName() << std::endl << std::endl;

	return 0;
}