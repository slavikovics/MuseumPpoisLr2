#ifndef ID_NOT_ACCEPTABLE_EXCEPTION_H 
#define ID_NOT_ACCEPTABLE_EXCEPTION_H 

#include <string>
#include "Person.h"

namespace MuseumNamespace
{
	class IdNotAcceptableException : public std::exception
	{
	public:

		IdNotAcceptableException(int personId, std::string personName);

		virtual const char* what() const noexcept override;

	private:

		void BuildExceptionMessage();

		int _personId;

		std::string _personName;

		std::string _message;
	};
}

#endif