#include "EmployeesController.h"

namespace MuseumNamespace
{
	void EmployeesController::AddEmployee(Employee employee)
	{
		_employees.push_back(employee);
	}

	void EmployeesController::RemoveEmployeeById(int employeeId)
	{
		for (Employee employee : _employees)
		{
			if (employee.GetId() == employeeId)
			{
				_employees.remove(employee);
				return;
			}
		}
	}

	void EmployeesController::RemoveEmployeeByName(std::string employeeName)
	{
		for (Employee employee : _employees)
		{
			if (employee.GetName() == employeeName)
			{
				_employees.remove(employee);
				return;
			}
		}
	}

	bool EmployeesController::HasEmployeeWithId(int employeeId)
	{
		for (Employee employee : _employees)
		{
			if (employee.GetId() == employeeId)
			{
				return true;
			}
		}
		return false;
	}

	bool EmployeesController::HasEmployeeWithName(std::string employeeName)
	{
		for (Employee employee : _employees)
		{
			if (employee.GetName() == employeeName)
			{
				return true;
			}
		}
		return false;
	}

	Employee& EmployeesController::FindEmployeeById(int id)
	{
		for (Employee employee : _employees)
		{
			if (employee.GetId() == id)
			{
				return employee;
			}
		}
	}

	Employee& EmployeesController::FindEmployeeByName(std::string name)
	{
		for (Employee employee : _employees)
		{
			if (employee.GetName() == name)
			{
				return employee;
			}
		}
	}

	std::list<Employee>& EmployeesController::GetAllEmployees()
	{
		return _employees;
	}

	std::string EmployeesController::GetAllEmployeesData()
	{
		std::string output = "employees list:\n";

		for (Employee employee : _employees)
		{
			output += "My id is: " + std::to_string(employee.GetId()) + ", my Name is: " 
				+ employee.GetName() + ", my job is: " + employee.GetJobAsString() 
				+ ". " + employee.AskAboutJob() + "\n";
		}

		return output;
	}
}


