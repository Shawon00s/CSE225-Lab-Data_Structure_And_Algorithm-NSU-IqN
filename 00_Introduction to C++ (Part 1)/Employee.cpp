#include "Employee.h"
#include <iostream>

using namespace std;

//Had to use inline here to avoid Multiple definitions of class functions
inline void Employee :: printInfo()
    {
        cout << "Name: "<< name << " ID: " << ID << " Salary: " <<salary << " Tk." << endl;
    }
