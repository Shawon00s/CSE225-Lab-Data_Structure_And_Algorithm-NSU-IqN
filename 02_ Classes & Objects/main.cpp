/*
    Tasks for Students:
    1. In the driver file (main.cpp), perform the following sub-tasks.
    a. Create two objects of this class, one with no constructor argument and one with
    argument 4.
    b. Take four input values from the user and store them in the array inside the second
    object using the set method.
    c. For the second object, print all the values you just stored.
    Note that, you cannot assign anything in the first object since the array inside it has
    size 0. Neither can you change the size of this array to some other size.

    2. Modify the header and the source files. Add a member function void allocate(int s)
    which allows you to change the size of the array. Make sure that memory is not leaked.

    3. Modify the header file and the source files again, so that it works for a two-dimensional
    array where all the rows are the same size. The user will specify the number of rows and
    columns as well as the content of the array, which you will take as input from the user in
    the main function
*/

#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    cout << "Task 1:" <<endl;

    dynArr obj1;
    dynArr obj2(4);

    int inp;
    cout << "Enter four integers: ";
    for(int i=0; i<4; i++)
    {
        cin >> inp;
        obj2.setValue(i,inp);
    }

    cout << "Printing all values: ";
    for(int i=0; i<4; i++)
    {
        cout << obj2.getValue(i) << "   ";
    }

    obj2.~dynArr();

    cout << "\n\n" << "Task 2:" << endl;

    int SIZE;
    cout << "Enter the size of the array: ";
    cin >> SIZE;

    obj2.allocate(SIZE);

    cout << "Enter elements for the array: ";
    for(int i=0; i<SIZE; i++)
    {
        cin >> inp;
        obj2.setValue(i,inp);
    }

    cout << "Printing all values: ";
    for(int i=0; i<SIZE; i++)
    {
        cout << obj2.getValue(i) <<"   ";
    }

    obj2.~dynArr();

    cout << "\n\n" << "Task 3:" << endl;

    int row,col;
    cout << "Enter number of row: " << endl;
    cin >> row;
    cout << "Enter number of column: " << endl;
    cin >> col;

    obj2.allocateFor2D(row,col);

    cout << "Enter the elements for the 2D array: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> inp;
            obj2.setValueFor2D(i,j,inp);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << obj2.getValueFor2D(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl << endl;
    return 0;
}
