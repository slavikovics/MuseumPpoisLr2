#ifndef VISITORS_CONTROLLER_H
#define VISITORS_CONTROLLER_H

#include "Visitor.h"
#include <list>

namespace MuseumNamespace
{
	class VisitorsController
	{
	private:

		std::list<Visitor*> _visitors;

	public:

		void AddVisitor(Visitor* visitor);

		void RemoveVisitorById(int visitorId);

		void RemoveVisitorByName(std::string name);

		bool HasVisitorWithId(int visitorId);

		bool HasVisitorWithName(std::string visitorName);

		Visitor* FindVisitorById(int id);

		Visitor* FindVisitorByName(std::string name);

		std::list<Visitor*> GetAllVisitors();

		std::string GetAllVisitorsData();
		
		bool CheckIdIsUniqueAndAcceptable(int id);
	};
}

#endif