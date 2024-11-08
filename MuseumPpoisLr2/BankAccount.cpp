#include "BankAccount.h"

namespace MuseumNamespace
{
	BankAccount::BankAccount(double startingAmountOfMoney)
	{
		_amountOfMoney = startingAmountOfMoney;
	}

	void BankAccount::IncreaseBalance(double offset)
	{
		_amountOfMoney += offset;
	}

	void BankAccount::DecreaseBalance(double offset)
	{
		_amountOfMoney -= offset;
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




