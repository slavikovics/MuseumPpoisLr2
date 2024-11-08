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

	void VisitorsController::RemoveVisitorById(int visitorId)
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

	void VisitorsController::RemoveVisitorByName(std::string visitorName)
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

	bool VisitorsController::HasVisitorWithId(int visitorId)
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

	bool VisitorsController::HasVisitorWithName(std::string visitorName)
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

	std::string VisitorsController::GetAllVisitorsData()
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
		return !HasVisitorWithId(id);
	}
}
