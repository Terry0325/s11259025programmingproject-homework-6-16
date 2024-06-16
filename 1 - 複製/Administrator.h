#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <iostream>
#include <string>
#include "salariedemployee.h"

using namespace std;

namespace SavitchEmployees {

    // Class Administrator represents an administrator employee
    // that inherits from the SalariedEmployee class.
    class Administrator : public SalariedEmployee
    {
    public:
        // Default constructor initializing member variables to default values.
        Administrator() : SalariedEmployee()
        {
            title = "unknown";
            area = "unknown";
            supervisor = "unknown";
            protect = 0;
        }

        // Constructor initializing member variables to provided values and
        // calling the base class constructor to initialize base class members.
        Administrator(const string& title, const string& area, const string& supervisor, double protect, const string& theName, const string& theSsn, double theWeeklySalary)
            : SalariedEmployee(theName, theSsn, theWeeklySalary)
        {
            this->title = title;
            this->area = area; // Corrected assignment (was assigning title to area).
            this->supervisor = supervisor;
            this->protect = protect;
        }

        // Mutator to set the administrator's supervisor.
        void set_supervisor(string supervisor)
        {
            this->supervisor = supervisor;
        }

        // Function to input administrator's data.
        void input_data()
        {
            cout << "title: ";
            cin >> this->title;
            cout << "area: ";
            cin >> this->area;
            cout << "supervisor: ";
            cin >> this->supervisor;
            cout << "annual salary: ";
            cin >> this->protect;
        }

        // Function to print administrator's details including check details.
        void print()
        {
            this->printCheck();
            cout << "title: " << this->title << endl;
            cout << "area: " << this->area << endl;
            cout << "supervisor: " << this->supervisor << endl;
            cout << "annual salary: " << this->protect << endl;
        }

    private:
        // Member variable to store the administrator's title.
        string title;

        // Member variable to store the administrator's area.
        string area;

        // Member variable to store the administrator's supervisor.
        string supervisor;

        // Member variable to store the administrator's annual salary.
        double protect;
    };

} // namespace SavitchEmployees

#endif // ADMINISTRATOR_H
