// This is the header file employee.h.
// This is the interface for the class Employee.
// This is primarily intended to be used as a base class to derive
// classes for different kinds of employees.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

namespace SavitchEmployees {

    // Class Employee represents a generic employee with basic information.
    class Employee {
    public:
        // Default constructor initializing member variables to default values.
        Employee()
        {
            name = "unknown";
            ssn = "unknown";
            netPay = 0;
        }

        // Constructor initializing member variables to provided values.
        Employee(const string& theName, const string& theSsn)
        {
            this->name = theName;
            this->ssn = theSsn;
        }

        // Accessor for the employee's name.
        string getName() const
        {
            return this->name;
        }

        // Accessor for the employee's social security number (SSN).
        string getSsn() const
        {
            return this->ssn;
        }

        // Accessor for the employee's net pay.
        double getNetPay() const
        {
            return this->netPay;
        }

        // Mutator to set the employee's name.
        void setName(const string& newName)
        {
            this->name = newName;
        }

        // Mutator to set the employee's SSN.
        void setSsn(const string& newSsn)
        {
            this->ssn = newSsn;
        }

        // Mutator to set the employee's net pay.
        void setNetPay(double newNetPay)
        {
            this->netPay = newNetPay;
        }

        // Function to print the employee's check details.
        void printCheck() const
        {
            cout << "name: " << this->getName() << endl;
            cout << "ssn: " << this->getSsn() << endl;
            cout << "netPay: " << this->getNetPay() << endl;
        }

    private:
        // Member variable to store the employee's name.
        string name;

        // Member variable to store the employee's SSN.
        string ssn;

        // Member variable to store the employee's net pay.
        double netPay;
    };

} // namespace SavitchEmployees

#endif // EMPLOYEE_H
