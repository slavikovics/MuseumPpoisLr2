#include <iostream>
#include "Employee.h"
#include "Guard.h"
#include "Cashier.h"
#include "Visitor.h"
#include "EmployeesController.h"
#include "VisitorsController.h"
#include "IdNotAcceptableException.h"
#include "Exhibit.h"

using namespace MuseumNamespace;

int main()
{
	//Employee employee1("Greg", 1);
	////std::cout << "name: " << employee1.GetName() << std::endl;
	////std::cout << "id: " << employee1.GetId() << std::endl;
	////std::cout << "job: " << employee1.AskAboutJob() << std::endl << std::endl;

	//Employee employee2("Kate", 2, 4);
	///*std::cout << "name: " << employee2.GetName() << std::endl;
	//std::cout << "id: " << employee2.GetId() << std::endl;
	//std::cout << "job: " << employee2.AskAboutJob() << std::endl << std::endl;*/

	//Person person("Alex", 3);
	///*std::cout << employee1.InteractionWithVisitor(person) << std::endl;
	//std::cout << employee2.InteractionWithVisitor(person) << std::endl << std::endl;*/

	//Cashier* cashier = new Cashier("Jeffrey", 4, 1);
	///*std::cout << "name: " << cashier->GetName() << std::endl;
	//std::cout << "id: " << cashier->GetId() << std::endl;
	//std::cout << "job: " << cashier->AskAboutJob() << std::endl;
	//std::cout << "job: " << cashier->GetJobAsString() << std::endl << std::endl;
	//std::cout << cashier->InteractionWithVisitor(person) << std::endl << std::endl;*/

	//Visitor* visitor1 = new Visitor("Jane", 1);
	//Visitor* visitor2 = new Visitor("Alex", 2);
	//Visitor* visitor3 = new Visitor("Hugo", 3);

	////std::cout << cashier->InteractionWithVisitor(visitor) << std::endl;
	////std::cout << visitor.BrakeExhibit() << std::endl;

	//Cleaner* cleaner = new Cleaner("John", 6, 1);
	//Guard* guard = new Guard("Rachel", 7, 3);
	//Guide* guide = new Guide("Maria", 8, 3);

	//EmployeesController employeesController = EmployeesController();
	//try
	//{		
	//	/*employeesController.AddEmployee(&employee1);
	//	employeesController.AddEmployee(&employee1);*/
	//	employeesController.AddEmployee(cleaner);
	//	employeesController.AddEmployee(guard);
	//	employeesController.AddEmployee(guide);
	//	employeesController.AddEmployee(cashier);
	//}
	//catch (const IdNotAcceptableException exception)
	//{
	//	std::cout << exception.what() << std::endl;
	//}
	//std::cout << employeesController.GetAllObjectsData() << std::endl;

	////employeesController.RemoveEmployeeById(1);
	////std::cout << employeesController.GetAllEmployeesData() << std::endl;
	////try
	////{
	////	std::cout << employeesController.FindEmployeeByName("Greg")->AskAboutJob() << std::endl;
	////}
	////catch(const PersonNotFoundException exception)
	////{
	////	std::cout << exception.what() << std::endl;
	////}

	//VisitorsController visitorsController;
	//try
	//{
	//	visitorsController.AddVisitor(visitor1);
	//	visitorsController.AddVisitor(visitor2);
	//	visitorsController.AddVisitor(visitor3);
	//}
	//catch (const IdNotAcceptableException exception)
	//{
	//	std::cout << exception.what() << std::endl;
	//}
	//std::cout << visitorsController.GetAllObjectsData() << std::endl << std::endl;

	//Exhibit exhibit = Exhibit(1, "vase", "was found ...", "Greece", -480);

	//std::cout << exhibit.GetDescription() << std::endl;
	//std::cout << exhibit.GetOriginCountry() << std::endl;
	//std::cout << exhibit.GetYearOfFirstAppearingInHistoricalSources() << std::endl;
	//std::cout << exhibit.GetYearOfFirstAppearingInHistoricalSources() << std::endl;

	//delete cashier;
	return 0;
}