#ifndef CLEANER_H
#define CLEANER_H

#include "Employee.h"

namespace MuseumNamespace
{
    class Cleaner : public Employee
    {
    public:

        virtual std::string InteractionWithVisitor(Person& visitor) override;

        virtual std::string GetJobAsString() override;

        Cleaner(std::string name, int id);

        Cleaner(std::string name, int id, int relationToJob);
    };
}

#endif