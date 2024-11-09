#include "PersonNotFoundException.h"

namespace MuseumNamespace 
{
	PersonNotFoundException::PersonNotFoundException(std::string personName)
	{
		_personName = personName;
		_personId = 0;
		_wasSearchedById = false;
		BuildExceptionMessage();
	}

	PersonNotFoundException::PersonNotFoundException(int personId)
	{
		_personId = personId;
		_personName = "";
		_wasSearchedById = true;
		BuildExceptionMessage();
	}

	const char* PersonNotFoundException::what() const noexcept
	{
		return _message.c_str();
	}

	std::string PersonNotFoundException::GetMessage()
	{
		return _message;
	}

	void PersonNotFoundException::BuildExceptionMessage()
	{
		if (_wasSearchedById == false)
		{
			_message = "Person with name " + _personName + " was not found.";
			return;
		}
		_message = "Person with id " + std::to_string(_personId) + " was not found.";
	}		
}
