#pragma once
#include "Employee.h"
#include "Cashier.h"
#include "Cleaner.h"
#include "Guard.h"
#include "Guide.h"
#include <list>

namespace MuseumNamespace
{
	class EmployeesController
	{
	private:
		
		std::list<Employee*> _employees;

	public:

		void AddEmployee(Employee* employee);

		void RemoveEmployeeById(int employeeId);

		void RemoveEmployeeByName(std::string name);

		bool HasEmployeeWithId(int id);

		bool HasEmployeeWithName(std::string name);

		Employee* FindEmployeeById(int id);

		Employee* FindEmployeeByName(std::string name);

		std::list<Employee*> GetAllEmployees();

		std::string GetAllEmployeesData();
	};
}
