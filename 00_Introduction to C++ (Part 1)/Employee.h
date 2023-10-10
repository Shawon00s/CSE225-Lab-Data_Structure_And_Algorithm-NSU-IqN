#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>

class Employee
{
    public:
        std::string name;
        int ID;
        double salary;
        void printInfo();
};

#endif // EMPLOYEE_H_INCLUDED
