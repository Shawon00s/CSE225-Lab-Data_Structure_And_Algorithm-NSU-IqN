#include "dynarr.h"
#include <iostream>

using namespace std;

inline dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
inline dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
inline dynArr::~dynArr()
{
    delete [] data;
}
inline int dynArr::getValue(int index)
{
    return data[index];
}
inline void dynArr::setValue(int index,int value)
{
    data[index] = value;
}

//For allocation of the size of the array
inline void dynArr::allocate(int s)
{
    data = new int[s];
}

//For 2D array (3rd Task)
inline int dynArr::getValueFor2D(int row,int col)
{
    return dataFor2D[row][col];
}
inline void dynArr::setValueFor2D(int row,int col,int value)
{
    dataFor2D[row][col] = value;
}
inline void dynArr::allocateFor2D(int row, int col)
{
    dataFor2D = new int *[row];
    for (int i = 0; i < row; i++)
    {
        dataFor2D[i] = new int[col];
    }
}
