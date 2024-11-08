#ifndef VISITORS_CONTROLLER_H
#define VISITORS_CONTROLLER_H

#include "Visitor.h"
#include "IController.h"
#include <list>

namespace MuseumNamespace
{
	class VisitorsController
	{
	private:

		std::list<Visitor*> _visitors;

	public:

		void AddVisitor(Visitor* visitor);

		void RemoveObjectById(int visitorId);

		void RemoveObjectByName(std::string name);

		bool HasObjectWithId(int visitorId);

		bool HasObjectWithName(std::string visitorName);

		Visitor* FindVisitorById(int id);

		Visitor* FindVisitorByName(std::string name);

		std::list<Visitor*> GetAllVisitors();

		std::string GetAllObjectsData();
		
		bool CheckIdIsUniqueAndAcceptable(int id);

		std::string CheckLitter(EmployeesController& employeesController);

		std::string CheckGuideAskedAssistance(EmployeesController& employeesController);
	};
}

#endif