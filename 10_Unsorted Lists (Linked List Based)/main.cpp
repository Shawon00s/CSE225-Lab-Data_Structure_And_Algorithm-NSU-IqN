/*
Tasks:
    Generate the driver file (main.cpp) where you perform the following tasks.
    Operation to Be Tested and Description of Action

        ▪ You are given two sequences of integers arranged in ascending order. Your task is to combine
        the sequences into one ascending sequence. You can safely assume that no integer will be
        repeated. Input starts with a positive integer m, which specifies the number of elements in the
        first sequence. Next m values are the elements in the first sequence. The next positive integer n
        specifies the number of elements in the second sequence. Next, n values are the elements in the
        second sequence. The output is the combined sequence.

        ▪ Input Values
            10 1 5 6 10 14 20 25 31 38 40
            12 2 4 7 9 16 19 23 24 32 35 36 42

        ▪ Expected Output
            1 2 4 5 6 7 9 10 14 16 19 20 23 24 25 31 32 35 36 38 40 42
*/

#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    int m,n;
    UnsortedType <int> list1, list2, combined;

    cout  << "Enter the size of the first array: " ;
    cin >> m;
    cout << "Enter your elements of the first array: ";

    int item;
    for(int i=0; i<m; i++)
    {
        int item;
        cin >> item;
        list1.InsertItem(item);
    }

    cout  << "Enter the size of the second array: " ;
    cin >> n;
    cout << "Enter your elements of the second array: ";

    for(int i=0; i<n; i++)
    {
        cin >> item;
        list2.InsertItem(item);
    }

    int value1, value2;
    int length1 = list1.LengthIs();
    int length2 = list2.LengthIs();
    list1.GetNextItem(value1);
    list2.GetNextItem(value2);

    while (length1 > 0 && length2 > 0)
    {
        if (value1 > value2)
        {
            combined.InsertItem(value1);
            length1--;
            if (length1 > 0)
                list1.GetNextItem(value1);
        }
        else if (value2 > value1)
        {
            combined.InsertItem(value2);
            length2--;
            if (length2 > 0)
                list2.GetNextItem(value2);
        }
        else
        {
            combined.InsertItem(value1);
            combined.InsertItem(value2);
            length1--;
            length2--;
            if (length1 > 0)
                list1.GetNextItem(value1);
            if (length2 > 0)
                list2.GetNextItem(value2);
        }
    }

    while (length1 > 0)
    {
        combined.InsertItem(value1);
        length1--;
        if (length1 > 0)
            list1.GetNextItem(value1);
    }

    while (length2 > 0)
    {
        combined.InsertItem(value2);
        length2--;
        if (length2 > 0)
            list2.GetNextItem(value2);
    }

    int value_combined;
    int index_combined = combined.LengthIs() - 1;

    cout << "\nThe combined array: " << endl;
    while (index_combined >= 0)
    {
        combined.GetNextItem(value_combined);
        cout << value_combined << " ";
        index_combined--;
    }
    cout << endl;

    return 0;
}
