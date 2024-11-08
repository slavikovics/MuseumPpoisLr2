#include "VisitorsController.h"
#include "IdNotAcceptableException.h"
#include "PersonNotFoundException.h"

namespace MuseumNamespace
{
	void VisitorsController::AddVisitor(Visitor* visitor)
	{
		if (!CheckIdIsUniqueAndAcceptable(visitor->GetId()))
		{
			throw IdNotAcceptableException(visitor->GetId(), visitor->GetName());
		}
		_visitors.push_back(visitor);
	}

	void VisitorsController::RemoveObjectById(int visitorId)
	{
		for (Visitor* visitor : _visitors)
		{
			if (visitor->GetId() == visitorId)
			{
				_visitors.remove(visitor);
				return;
			}
		}
	}

	void VisitorsController::RemoveObjectByName(std::string visitorName)
	{
		for (Visitor* visitor : _visitors)
		{
			if (visitor->GetName() == visitorName)
			{
				_visitors.remove(visitor);
				return;
			}
		}
	}

	bool VisitorsController::HasObjectWithId(int visitorId)
	{
		for (Visitor* visitor : _visitors)
		{
			if (visitor->GetId() == visitorId)
			{
				return true;
			}
		}
		return false;
	}

	bool VisitorsController::HasObjectWithName(std::string visitorName)
	{
		for (Visitor* visitor : _visitors)
		{
			if (visitor->GetName() == visitorName)
			{
				return true;
			}
		}
		return false;
	}

	Visitor* VisitorsController::FindVisitorById(int id)
	{
		for (Visitor* visitor : _visitors)
		{
			if (visitor->GetId() == id)
			{
				return visitor;
			}
		}

		throw PersonNotFoundException(id);
	}

	Visitor* VisitorsController::FindVisitorByName(std::string name)
	{
		for (Visitor* visitor : _visitors)
		{
			if (visitor->GetName() == name)
			{
				return visitor;
			}
		}

		throw PersonNotFoundException(name);
	}

	std::list<Visitor*> VisitorsController::GetAllVisitors()
	{
		return _visitors;
	}

	std::string VisitorsController::GetAllObjectsData()
	{
		std::string output = "visitors list:\n";

		for (Visitor* visitor : _visitors)
		{
			output += visitor->GetVisitorData();
		}

		return output;
	}

	bool VisitorsController::CheckIdIsUniqueAndAcceptable(int id)
	{
		if (id <= 0) return false;
		return !HasObjectWithId(id);
	}

	std::string VisitorsController::CheckLitter(EmployeesController& employeesController)
	{
		std::string emplyeesResponce = "";

		for (Visitor* visitor : _visitors)
		{
			if (visitor->_hasBrokenExhibit || visitor->_hasThrownLitter)
			{
				for (Employee* employee : employeesController.GetAllEmployees())
				{ 
					if (employee->GetJobAsString() == "cleaner")
					{
						emplyeesResponce += employee->InteractionWithVisitor(*visitor);
					}
				}
			}
		}

		return emplyeesResponce;
	}

	std::string VisitorsController::CheckGuideAskedAssistance(EmployeesController& employeesController)
	{
		std::string emplyeesResponce = "";

		for (Visitor* visitor : _visitors)
		{
			if (visitor->_hasAskedGuide)
			{
				for (Employee* employee : employeesController.GetAllEmployees())
				{
					if (employee->GetJobAsString() == "guide")
					{
						emplyeesResponce += employee->InteractionWithVisitor(*visitor);
					}
				}
			}
		}

		return emplyeesResponce;
	}
}
