#include "Employee.h"

namespace MuseumNamespace
{
	std::string Employee::InteractionWithVisitor(Person& visitor)
	{
		return GetName() + ": no interaction with visitor " + visitor.GetName();
	}

	std::string Employee::AskAboutJob()
	{
		return "I " + GetRelationToJobAsString() + " my job.";
	}

	Employee::Employee()
	{
		_name = "";
		_id = -1;
		_relationToJob = 2;
		_monthlyWage = DefaultMonthlyWage;
	}

	std::string Employee::GetJobAsString()
	{
		return "any";
	}

	std::string Employee::GetRelationToJobAsString()
	{
		switch (_relationToJob)
		{
			case 0: return "hate";
			case 1: return "dislike";
			case 2: return "am indifferent to";
			case 3: return "feel good about";
			case 4: return "love";
		}
	}

	int Employee::GetRelationToJobAsInt()
	{
		return _relationToJob;
	}

	void Employee::SetRelationToJob(int newRelationToJob)
	{
		_relationToJob = newRelationToJob;
	}

	void Employee::SetMonthlyWage(double newMonthlyWage)
	{
		_monthlyWage = newMonthlyWage;
	}

	double Employee::GetMonthlyWage()
	{
		return _monthlyWage;
	}

	void Employee::IncreaseMonthlyWage(double increaseAmount)
	{
		_monthlyWage += increaseAmount;
	}

	Employee::Employee(std::string name, int id)
	{
		_name = name;
		_id = id;
		_relationToJob = 2;	
		SetMonthlyWage(DefaultMonthlyWage);
	}

	Employee::Employee(std::string name, int id, int relationToJob)
	{
		_name = name;
		_id = id;
		_relationToJob = relationToJob;
		SetMonthlyWage(DefaultMonthlyWage);
	}

	Employee::Employee(std::string name, int id, int relationToJob, double monthlyWage)
	{
		_name = name;
		_id = id;
		_relationToJob = relationToJob;
		_monthlyWage = _monthlyWage;
	}
	bool Employee::operator==(const Employee& employee)const
	{
		if (_name == employee._name && _id == employee._id) return true;
		return false;
	}
	bool Employee::operator!=(const Employee& employee)
	{
		return false;
	}
	Employee& Employee::operator=(const Employee& employee)
	{
		Employee newEmployee(employee._name, employee._id, employee._relationToJob, employee._monthlyWage);
		return newEmployee;
	}
}