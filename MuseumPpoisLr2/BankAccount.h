#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include "EmployeesController.h"
#include <list>

namespace MuseumNamespace
{
	class BankAccount
	{
	private:

		double _amountOfMoney;

	public:

		BankAccount(double startingAmountOfMoney);

		BankAccount();

		void IncreaseBalance(double offset);

		void DecreaseBalance(double offset);

		void CountMonthlyCostOfWages(EmployeesController& employeesController);

		double GetMoney();

		bool IsBancrupt();
	};
}

#endif 