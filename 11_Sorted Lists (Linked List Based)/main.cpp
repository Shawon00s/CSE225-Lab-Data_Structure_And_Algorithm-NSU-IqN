#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.cpp"

using namespace std;

template<class T>
void Print(SortedType<T> u)
{
    int length = u.LengthIs();
    T value;
    for (int i = 0; i < length; i++) {
        u.GetNextItem(value);
        cout << value << endl;
    }
}

int main()
{
    SortedType<timeStamp> sort1;

    timeStamp t1(15, 34, 23);
    sort1.InsertItem(t1);
    timeStamp t2(13, 13, 02);
    sort1.InsertItem(t2);
    timeStamp t3(43, 45, 12);
    sort1.InsertItem(t3);
    timeStamp t4(25, 36, 17);
    sort1.InsertItem(t4);
    timeStamp t5(52, 02, 20);
    sort1.InsertItem(t5);

    timeStamp temp(25, 36, 17);
    sort1.DeleteItem(temp);

    Print(sort1);

    return 0;
}
