#include <iostream>
#include "Employee.h"

using namespace MuseumNamespace;

int main()
{
	Employee employee1("Greg", 1);
	std::cout << "name: " << employee1.GetName() << std::endl;
	std::cout << "id: " << employee1.GetId() << std::endl;
	std::cout << "job: " << employee1.GetJob() << std::endl << std::endl;

	Employee employee2("Kate", 2, Jobs::Guide);
	std::cout << "name: " << employee2.GetName() << std::endl;
	std::cout << "id: " << employee2.GetId() << std::endl;
	std::cout << "job: " << employee2.GetJob() << std::endl << std::endl;

	return 0;
}