#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

namespace MuseumNamespace
{
	class BankAccount
	{
	private:

		double _amountOfMoney;

	public:

		BankAccount(double startingAmountOfMoney);

		void IncreaseBalance(double offset);

		void DecreaseBalance(double offset);

		double GetMoney();

		bool IsBancrupt();
	};
}

#endif 