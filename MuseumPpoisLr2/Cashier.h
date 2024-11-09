#ifndef CASHIER_H
#define CASHIER_H

#include "Employee.h"

namespace MuseumNamespace
{
    class Cashier : public Employee
    {

    private:

        const std::string CashierJobString = "cashier";

        const std::string CashierResponse = ": sells item to a visitor ";

    public:

        virtual std::string InteractionWithVisitor(Person& visitor) override;

        virtual std::string GetJobAsString() override;

        Cashier(std::string name, int id);

        Cashier(std::string name, int id, int relationToJob);
    };
}

#endif