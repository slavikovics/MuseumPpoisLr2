#include "BankAccount.h"

namespace MuseumNamespace
{
	BankAccount::BankAccount(double startingAmountOfMoney)
	{
		_amountOfMoney = startingAmountOfMoney;
	}

	BankAccount::BankAccount()
	{
		_amountOfMoney = 2000;
	}

	void BankAccount::IncreaseBalance(double offset)
	{
		_amountOfMoney += offset;
	}

	void BankAccount::DecreaseBalance(double offset)
	{
		_amountOfMoney -= offset;
	}

	void BankAccount::CountMonthlyCostOfWages(EmployeesController& employeesController)
	{
		double totalLoss = 0;
		std::list<Employee*> employees = employeesController.GetAllEmployees();
		for (Employee* employee : employees)
		{
			totalLoss += employee->GetMonthlyWage();
		}

		DecreaseBalance(totalLoss);
	}

	double BankAccount::GetMoney()
	{
		return _amountOfMoney;
	}

	bool BankAccount::IsBancrupt()
	{
		if (_amountOfMoney < 0) return true;
		return false;
	}
}




