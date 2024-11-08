#ifndef MUSEUM_H
#define MUSEUM_H

#include <string>
#include "EmployeesController.h"
#include "VisitorsController.h"
#include "ExhibitsController.h"
#include "BankAccount.h"

namespace MuseumNamespace
{
	class Museum
	{
	public:

		EmployeesController employeesController;

		VisitorsController visitorsController;

		ExhibitsController exhibitsController;

		BankAccount bankAccount;

		Museum();

		void Open();

		void Close();

		void HireEmployees();

		void FireEmployees();

		void UpdateVisitorsStatuses();

		void CalendarMonthEnded();
	};
}

#endif