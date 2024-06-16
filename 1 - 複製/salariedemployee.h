// This is the header file salariedemployee.h.
// This is the interface for the class SalariedEmployee.

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

namespace SavitchEmployees {

    // Class SalariedEmployee represents an employee with a weekly salary.
    class SalariedEmployee : public Employee {
    public:
        // Default constructor initializing member variables to default values.
        SalariedEmployee() : Employee()
        {
            this->salary = 0;
        }

        // Constructor initializing member variables to provided values and
        // calling the base class constructor to initialize base class members.
        SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary)
            : Employee(theName, theSsn)
        {
            this->salary = theWeeklySalary;
        }

        // Accessor for the employee's weekly salary.
        double getSalary() const
        {
            return this->salary;
        }

        // Mutator to set the employee's weekly salary.
        void setSalary(double newSalary)
        {
            this->salary = newSalary;
        }

        // Function to print the employee's check details including salary.
        void printCheck() const
        {
            cout << "name: " << this->getName() << endl;
            cout << "ssn: " << this->getSsn() << endl;
            cout << "netPay: " << this->getNetPay() << endl;
            cout << "salary: " << this->getSalary() << endl;
        }

    private:
        // Member variable to store the employee's weekly salary.
        double salary;
    };

} // namespace SavitchEmployees

#endif // SALARIEDEMPLOYEE_H
