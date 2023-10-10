/*
    Tasks (Part 1 – Back to Basics):
    1. Take 3 integer inputs and print their sum
    2. Take 2 float inputs and print their difference
    3. Write a function called void isEven(int n) where you will check whether a number is
    even or not. Check the function if the value of n is 44, 19, and 0.

    Tasks (Part 2 – Creation of Class Objects):
    1. Create a Class called “Employee” that has name, ID, and salary. The class should have
    a method printInfo() that prints the information of the employee
    2. Now, create a driver file (main file) where you will create multiple Employee objects
    and show their information.
*/

#include <iostream>
#include "Employee.cpp"

using namespace std;

//isEven() function for Part 1
void isEven(int n)
{
    if(n%2==0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Not Even" << endl;
    }
}

int main()
{
    //Part 1 – Back to Basics
    int int1,int2,int3,sum;

    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;
    sum = int1+int2+int3;
    cout << "Sum is: "<< sum << endl;
    cout << endl;

    float fl1,fl2,diff;

    cout << "Enter two float numbers: ";
    cin >> fl1 >> fl2;

    if(fl1>fl2)
    {
        diff=fl1-fl2;
        cout << "Difference is: " << diff << endl;
    }
    else
    {
        diff=fl2-fl1;
        cout << "Difference is: " << diff << endl;
    }
    cout << endl;

    isEven(44);
    isEven(19);
    isEven(0);
    cout << endl;

    //Part 2 – Creation of Class Objects
    Employee obj1;
    obj1.name="ABC";
    obj1.ID=101;
    obj1.salary=45000;

    obj1.printInfo();

    Employee obj2;
    obj2.name="DEF";
    obj2.ID=102;
    obj2.salary=42000;

    obj2.printInfo();

    Employee obj3;
    obj3.name="XYZ";
    obj3.ID=103;
    obj3.salary=40000;

    return 0;
}
