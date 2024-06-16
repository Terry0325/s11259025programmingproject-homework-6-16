#ifndef STUDENT_H
#define STUDENT_H

#include "universitystaff.h"
#include <string>

using namespace std;

// Class representing a student with basic attributes.
class Student {
public:
    // Default constructor initializing member variables to default values.
    Student()
    {
        this->university_name = "unknown";
        this->registration_number = 0;
        this->proctor.setName("unknown");
    }

    // Constructor initializing member variables to provided values.
    Student(string university_name, int registration_number, string name)
    {
        this->university_name = university_name;
        this->registration_number = registration_number;
        this->proctor.setName(name);
    }

    // Assignment operator overloading for the Student class.
    Student& operator=(const Student& student2)
    {
        this->university_name = student2.university_name;
        this->registration_number = student2.registration_number;
        this->proctor = student2.proctor;
        return *this;
    }

    // Friend function to overload the << operator for the Student class.
    friend ostream& operator<<(ostream& output, const Student& student)
    {
        output << "university name: " << student.university_name << endl;
        output << "registration number: " << student.registration_number << endl;
        output << "proctor: " << student.proctor.getName() << endl;
        return output;
    }

    // Friend function to overload the >> operator for the Student class.
    friend istream& operator>>(istream& input, Student& student)
    {
        cout << "enter the university name: ";
        input >> student.university_name;
        cout << "enter the registration number: ";
        input >> student.registration_number;
        cout << "enter the proctor name: ";
        string proctorName;
        input >> proctorName;
        student.proctor.setName(proctorName);
        return input;
    }

protected:
    string university_name;
    int registration_number;
    UniversityStaff proctor;
};

// Class representing a science student, inheriting from Student.
class ScienceStudent : public Student {
public:
    // Default constructor initializing member variables to default values.
    ScienceStudent() : Student()
    {
        this->discipline = "unknown";
        this->course = "unknown";
    }

    // Constructor initializing member variables to provided values and
    // calling the base class constructor to initialize base class members.
    ScienceStudent(string university_name, int registration_number, string name, string discipline, string course)
        : Student(university_name, registration_number, name)
    {
        this->discipline = discipline;
        this->course = course;
    }

    // Assignment operator overloading for the ScienceStudent class.
    ScienceStudent& operator=(const ScienceStudent& scienceStudent)
    {
        this->university_name = scienceStudent.university_name;
        this->registration_number = scienceStudent.registration_number;
        this->proctor = scienceStudent.proctor;
        this->discipline = scienceStudent.discipline;
        this->course = scienceStudent.course;
        return *this;
    }

    // Friend function to overload the << operator for the ScienceStudent class.
    friend ostream& operator<<(ostream& output, const ScienceStudent& scienceStudent)
    {
        output << "university name: " << scienceStudent.university_name << endl;
        output << "registration number: " << scienceStudent.registration_number << endl;
        output << "proctor: " << scienceStudent.proctor.getName() << endl;
        output << "discipline: " << scienceStudent.discipline << endl;
        output << "course: " << scienceStudent.course << endl;
        return output;
    }

    // Friend function to overload the >> operator for the ScienceStudent class.
    friend istream& operator>>(istream& input, ScienceStudent& scienceStudent)
    {
        cout << "enter the university name: ";
        input >> scienceStudent.university_name;
        cout << "enter the registration number: ";
        input >> scienceStudent.registration_number;
        cout << "enter the proctor name: ";
        string proctorName;
        input >> proctorName;
        scienceStudent.proctor.setName(proctorName);
        cout << "enter the discipline: ";
        input >> scienceStudent.discipline;
        cout << "enter the course: ";
        input >> scienceStudent.course;
        return input;
    }

private:
    string discipline;
    string course;
};

#endif // STUDENT_H
