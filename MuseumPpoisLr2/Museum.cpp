#include "Museum.h"

namespace MuseumNamespace
{
	Museum::Museum()
	{
		Open();
	}

	void Museum::Open()
	{
		HireEmployees();
	}

	void Museum::Close()
	{
		FireEmployees();
	}

	void Museum::HireEmployees()
	{
		Cashier* cashier = new Cashier("defaultCashier", 1);
		Cleaner* cleaner = new Cleaner("defaultCleaner", 2);
		Guard* guard = new Guard("defaultGuard", 3);
		Guide* guide = new Guide("defaultGuide", 4);
		employeesController.AddEmployee(cashier);
		employeesController.AddEmployee(cleaner);
		employeesController.AddEmployee(guard);
		employeesController.AddEmployee(guide);
	}

	void Museum::FireEmployees()
	{
		while (employeesController.GetAllEmployees().size() > 0) employeesController.GetAllEmployees().pop_back();
	}

	void Museum::UpdateVisitorsStatuses()
	{
		
	}

	void Museum::CalendarMonthEnded()
	{
		bankAccount.CountMonthlyCostOfWages(employeesController);
		if (bankAccount.IsBancrupt()) Close();
	}
}


