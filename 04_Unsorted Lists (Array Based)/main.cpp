/*
    Tasks:
    Generate the driver file (main.cpp) where you perform the following tasks. However, there is a
    restriction that you cannot make any changes to the header file or the source file.

    Operation to Be Tested and Description of Action:
    ▪ Create a list of integers
    ▪ Insert four items
        [Input values: 5 7 6 9]
    ▪ Print the list
        [Output values: 5 7 6 9]
    ▪ Print the length of the list
        [Output values: 4]
    ▪ Insert one item
        [Input values: 1]
    ▪ Print the list
        [Input values: 5 7 6 9 1]
    ▪ Retrieve 4 and print whether found or not
        [Output values: Item is not found]
    ▪ Retrieve 5 and print whether found or not
        [Output values: Item is found]
    ▪ Print if the list is full or not List is full
        [Output values: List is full]
    ▪ Delete 5
    ▪ Print if the list is full or not List is not full
        [Output values: List is not full]
    ▪ Delete 1
    ▪ Print the list
        [Output values: 7 6 9]

    ▪ Write a class studentInfo that represents a student record. It must have variables
    to store the student ID, student’s name, and student’s CGPA. It also must have a
    function to print all the values. You will also need to overload a few operators.
    ▪ Create a list of objects of class studentInfo.
    ▪ Insert 5 student records
        [Input values:
            15234 Yuji Itadori 2.6
            13732 Megumi Fushigoro 3.9
            13569 Nobura Kugisaki 1.2
            15467 Satoru Gojo 4.0
            16285 Ryomen Sukuna 3.1 ]
    ▪ Print the list
        [Output values:
            15234, Yuji Itadori, 2.6
            13732, Megumi Fushigoro, 3.9
            13569, Nobura Kugisaki, 1.2
            15467, Satoru Gojo, 4.0
            16285, Ryomen Sukuna, 3.1 ]
*/

#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

//Class studentInfo
class studentInfo
{
public:
    int ID;
    string name;
    float cgpa;

    studentInfo()
    {
        ID = 0;
        name = "";
        cgpa = 0.0;
    }

    studentInfo(int i, string n, float c)
    {
        ID = i;
        name = n;
        cgpa = c;
    }
    bool operator==(studentInfo &other)
    {
        return ID==other.ID && name == other.name && cgpa == other.cgpa;
    }
    bool operator!=(studentInfo &other)
    {
        return ID!=other.ID || name != other.name || cgpa != other.cgpa;
    }
    void print()
    {
        cout << ID << ", " << name << ", " << cgpa << endl;
    }
};

int main()
{
    //Creating a list of integers
    UnsortedType <int> ulst;

    //Inserting four items
    cout << "Input four integers: ";
    for(int i=0; i<4; i++)
    {
        int inp;
        cin >> inp;
        ulst.InsertItem(inp);
    }

    //Printing the list
    int x;
    for(int i=0; i<ulst.LengthIs(); i++)
    {
        ulst.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    //Printing the length of the list
    cout << ulst.LengthIs() <<endl;

    //Inserting one item
    ulst.InsertItem(1);

    //Printing the list again
    ulst.ResetList();
    for(int i=0; i<ulst.LengthIs(); i++)
    {
        ulst.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    //Retrieving 4 and printing whether found or not
    int item;
    bool found = true;
    item = 4;
    ulst.RetrieveItem(item,found);
    if(found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    //Retrieving 5 and printing whether found or not
    item=5;
    ulst.RetrieveItem(item,found);
    if(found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    //Print if the list is full or not
    if(ulst.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    //Deleting 5
    ulst.DeleteItem(5);

    //Print if the list is full or not
    if(ulst.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    //Deleting 1
    ulst.DeleteItem(1);

    //Printing the list
    ulst.ResetList();
    for(int i=0; i<ulst.LengthIs(); i++)
    {
        ulst.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    //List of type studentInfo
    UnsortedType<studentInfo> students;
    studentInfo s1(15234, "Yuji Itadori", 2.6);
    studentInfo s2(13732, "Megumi Fushigoro", 3.9);
    studentInfo s3(13569, "Nobura Kugisaki", 1.2);
    studentInfo s4(15467, "Satoru Gojo", 4.0);
    studentInfo s5(16285, "Ryomen Sukuna", 3.1);

    //Inserting 5 records
    students.InsertItem(s1);
    students.InsertItem(s2);
    students.InsertItem(s3);
    students.InsertItem(s4);
    students.InsertItem(s5);

    studentInfo s;
    //printing the list
    for(int i=0; i<students.LengthIs(); i++)
    {
        students.GetNextItem(s);
        s.print();
    }

    return 0;
}
