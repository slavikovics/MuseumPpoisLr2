#ifndef GUIDE_H
#define GUIDE_H

#include "Employee.h"

namespace MuseumNamespace
{
    class Guide : public Employee
    {

    private:

        const std::string GuideJobString = "guide";

        const std::string GuideResponse = ": shows exhibit to a visitor ";

    public:

        virtual std::string InteractionWithVisitor(Person& visitor) override;

        virtual std::string GetJobAsString() override;

        Guide(std::string name, int id);

        Guide(std::string name, int id, int relationToJob);
    };
}

#endif
