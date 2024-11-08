#include "EmployeesController.h"
#include "PersonNotFoundException.h"
#include "IdNotAcceptableException.h"

namespace MuseumNamespace
{
	void EmployeesController::AddEmployee(Employee* employee)
	{
		if (!CheckIdIsUniqueAndAcceptable(employee->GetId()))
		{
			throw IdNotAcceptableException(employee->GetId(), employee->GetName());
		}
		_employees.push_back(employee);
	}

	void EmployeesController::RemoveObjectById(int employeeId)
	{
		for (Employee* employee : _employees)
		{
			if (employee->GetId() == employeeId)
			{
				_employees.remove(employee);
				return;
			}
		}
	}

	void EmployeesController::RemoveObjectByName(std::string employeeName)
	{
		for (Employee* employee : _employees)
		{
			if (employee->GetName() == employeeName)
			{
				_employees.remove(employee);
				return;
			}
		}
	}

	bool EmployeesController::HasObjectWithId(int employeeId)
	{
		for (Employee* employee : _employees)
		{
			if (employee->GetId() == employeeId)
			{
				return true;
			}
		}
		return false;
	}

	bool EmployeesController::HasObjectWithName(std::string employeeName)
	{
		for (Employee* employee : _employees)
		{
			if (employee->GetName() == employeeName)
			{
				return true;
			}
		}
		return false;
	}

	Employee* EmployeesController::FindEmployeeById(int id)
	{
		for (Employee* employee : _employees)
		{
			if (employee->GetId() == id)
			{
				return employee;
			}
		}

		throw PersonNotFoundException(id);
	}

	Employee* EmployeesController::FindEmployeeByName(std::string name)
	{
		for (Employee* employee : _employees)
		{
			if (employee->GetName() == name)
			{
				return employee;
			}
		}

		throw PersonNotFoundException(name);
	}

	std::list<Employee*> EmployeesController::GetAllEmployees()
	{
		return _employees;
	}

	std::string EmployeesController::GetAllObjectsData()
	{
		std::string output = "employees list:\n";

		for (Employee* employee : _employees)
		{
			output += employee->GetEmployeeData();
		}

		return output;
	}

	bool EmployeesController::CheckIdIsUniqueAndAcceptable(int id)
	{
		if (id <= 0) return false;
		return !HasObjectWithId(id);
	}
}


