#pragma once
#include "Employee.h"

namespace MuseumNamespace
{
    class Guard : public Employee
    {
    public:

        virtual std::string InteractionWithVisitor(Person& visitor) override;

        virtual std::string GetJobAsString() override;

        Guard(std::string name, int id);

        Guard(std::string name, int id, int relationToJob);
    };
}


