#ifndef ICONTROLLER_H
#define ICONTROLLER_H
#include "Person.h"

namespace MuseumNamespace
{
	class IController
	{
	public:

		virtual bool CheckIdIsUniqueAndAcceptable(int id) = 0;

		virtual std::string GetAllObjectsData() = 0;

		virtual bool HasObjectWithId(int objectId) = 0;

		virtual bool HasObjectWithName(std::string objectName) = 0;

		virtual void RemoveObjectByName(std::string objectName) = 0;

		virtual void RemoveObjectById(int objectId) = 0;
	};
}
#endif