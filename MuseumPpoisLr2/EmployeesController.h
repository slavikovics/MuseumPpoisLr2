#pragma once
#include "Employee.h"
#include "Cashier.h"
#include "Cleaner.h"
#include "Guard.h"
#include "Guide.h"
#include <list>
#include "IController.h"
#include "PersonNotFoundException.h"

namespace MuseumNamespace
{
	class EmployeesController : public IController
	{
	private:
		
		std::list<Employee*> _employees;

	public:

		void AddEmployee(Employee* employee);

		virtual void RemoveObjectById(int employeeId) override;

		virtual void RemoveObjectByName(std::string name) override;

		virtual bool HasObjectWithId(int id) override;

		virtual bool HasObjectWithName(std::string name) override;

		Employee* FindEmployeeById(int id);

		Employee* FindEmployeeByName(std::string name);

		std::list<Employee*> GetAllEmployees();

		virtual std::string GetAllObjectsData() override;

		virtual bool CheckIdIsUniqueAndAcceptable(int id) override;
	};
}
