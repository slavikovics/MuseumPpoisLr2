#ifndef PERSON_NOT_FOUND_EXCEPTION_H 
#define PERSON_NOT_FOUND_EXCEPTION_H 

#include <string>
#include "Person.h"

namespace MuseumNamespace
{
	class PersonNotFoundException : public std::exception
	{
	public:

		PersonNotFoundException(std::string personName);

		PersonNotFoundException(int personId);

		std::string GetMessage();

		virtual const char* what() const noexcept override;

	private: 

		void BuildExceptionMessage();

		int _personId;

		std::string _personName;

		bool _wasSearchedById;

		std::string _message;
	};
}

#endif