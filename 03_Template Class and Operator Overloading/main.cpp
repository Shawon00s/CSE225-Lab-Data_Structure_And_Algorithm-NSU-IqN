#include <iostream>
#include "dynarr.cpp"
#include "complex.cpp"

using namespace std;

int main()
{
    /*
        1. (Template Class) This time, modify the header file and the source file given
        below so that they now work as template classes (the array elements in the
        dynamically allocated memory can be any type as the user defines)
    */

    cout << "TASK 01: " << endl;
    int inp, size = 5;
    dynArr<int> d(size);

    cout << "Enter your five elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> inp;
        d.setValue(i, inp);
    }

    cout << "Output: ";
    for (int i = 0; i < size; i++)
    {
        cout << d.getValue(i) << " ";
    }
    cout << endl << endl;

    /*
        2. Modify the following class and overload the *(multiplication) and the != (not equal)
        operators for the class given below.
    */
    cout << "TASK 02: " << endl;
    Complex c1(5, 2), c2(5, 3);

    Complex c3 = c1 + c2;
    c3.Print();

    Complex c4 = c1 * c2;
    c4.Print();

    cout << (c1 != c2) << endl;
    return 0;
}
