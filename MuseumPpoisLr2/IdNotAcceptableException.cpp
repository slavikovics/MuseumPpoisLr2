#include "IdNotAcceptableException.h"

namespace MuseumNamespace
{
	IdNotAcceptableException::IdNotAcceptableException(int personId, std::string personName)
	{
		_personId = personId;
		_personName = personName;
		BuildExceptionMessage();
	}

	const char* IdNotAcceptableException::what() const noexcept
	{
		return _message.c_str();
	}

	std::string IdNotAcceptableException::GetMessage()
	{
		return _message;
	}

	void IdNotAcceptableException::BuildExceptionMessage()
	{
		_message = "Person " + _personName + " with id " + std::to_string(_personId) + " is not acceptable.";
	}

}
