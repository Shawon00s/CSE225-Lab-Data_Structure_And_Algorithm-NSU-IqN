#include<iostream>
#include "timestamp.h"

using namespace std;

inline timeStamp::timeStamp()
{

}

inline timeStamp::timeStamp(int s,int m,int h)
{
    this->s=s;
    this->m=m;
    this->h=h;
}

inline bool timeStamp::operator==(timeStamp t)
{
    if((s == t.s) && (m == t.m) && (h == t.h))
    {
        return true;
    }
    else
    {
        return false;
    }
}

inline bool timeStamp::operator!=(timeStamp t)
{
    if((h < t.h) || ((h == t.h) && (m < t.m)) || ((h = t.h) && (m == t.m) && (s < t.s)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

inline bool timeStamp::operator>(timeStamp t)
{
    if((h > t.h) || ((h == t.h) && (m > t.m)) || ((h == t.h) && (m == t.m) && (s > t.s)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

inline bool timeStamp::operator<(timeStamp t)
{
    if((h < t.h) || ((h == t.h) && (m < t.m)) || ((h == t.h) && (m == t.m) && (s < t.s)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

inline ostream &operator<<(ostream &os, timeStamp &t)
{
    os << t.s << ":" << t.m << ":" << t.h;
    return os;
}
