#include "dynarr.h"

/*
        1. (Template Class) This time, modify the header file and the source file given
        below so that they now work as template classes (the array elements in the
        dynamically allocated memory can be any type as the user defines)
*/

template<class T>
dynArr<T>::dynArr(int s)
{
    data = new T[s];
    size = s;
}

template<class T>
dynArr<T>::~dynArr()
{
    delete[] data;
}

template<class T>
T dynArr<T>::getValue(int index)
{
    return data[index];
}

template<class T>
void dynArr<T>::setValue(int index, T value)
{
    data[index] = value;
}
