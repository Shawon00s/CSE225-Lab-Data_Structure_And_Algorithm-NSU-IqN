/*
    Task:
    1. Using the new operator, allocate an integer array of user-specified size (the user gives the
    size of the array as input). Assign values to the array elements by taking user inputs and
    then printing the values. Finally, de-allocate the array using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    int SIZE;
    cout << "Enter the size of the array: ";
    cin >> SIZE;

    //Dynamically allocating the integer array
    int *ptr=new int[SIZE];

    cout << "Enter the elements for the array: ";
    for(int i=0;i<SIZE;i++)
    {
        cin >> ptr[i];
    }

    cout << endl << "Printing the array element: ";
    for(int i=0;i<SIZE;i++)
    {
        cout << ptr[i] <<"  ";
    }

    ////De-allocating the memory
    delete [] ptr;
}
