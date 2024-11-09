#include "pch.h"
#include "../MuseumPpoisLr2/BankAccount.h"
#include "../MuseumPpoisLr2/Museum.h"

using namespace MuseumNamespace;

TEST(BancAccountTest, CreationIncresingAndDecreasingTest)
{
	BankAccount bankAccount = BankAccount(120.892);
	bankAccount.DecreaseBalance(1345.65);
	EXPECT_EQ(bankAccount.GetMoney(), 120.892-1345.65);

	bankAccount.IncreaseBalance(10);
	EXPECT_EQ(bankAccount.GetMoney(), 120.892 - 1345.65 + 10);
}

TEST(BancAccountTest, IsBancruptTest)
{
	BankAccount bankAccount = BankAccount(-1);
	EXPECT_EQ(bankAccount.IsBancrupt(), true);

	bankAccount.IncreaseBalance(10);
	EXPECT_EQ(bankAccount.IsBancrupt(), false);
}

TEST(BancAccountTest, CountMonthlyCostOfWages)
{
	Museum museum;
	double oldBalance = museum.bankAccount.GetMoney();
	museum.bankAccount.CountMonthlyCostOfWages(museum.employeesController);
	double newBalance = museum.bankAccount.GetMoney();

	EXPECT_EQ(oldBalance - newBalance, 1200);
}