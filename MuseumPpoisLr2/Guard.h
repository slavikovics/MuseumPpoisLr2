#ifndef GUARD_H
#define GUARD_H

#include "Employee.h"

namespace MuseumNamespace
{
    class Guard : public Employee
    {

    private:

        const std::string GuardJobString = "guard";

        const std::string GuardResponse = ": takes out of the museum visitor ";

    public:

        virtual std::string InteractionWithVisitor(Person& visitor) override;

        virtual std::string GetJobAsString() override;

        Guard(std::string name, int id);

        Guard(std::string name, int id, int relationToJob);
    };
}

#endif
