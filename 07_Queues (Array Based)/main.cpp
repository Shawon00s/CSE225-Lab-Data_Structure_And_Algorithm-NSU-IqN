#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    // Create a queue of integers of size 5
    QueType <int> q(5);

    // Print if the queue is empty or not
    if(q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    //Enqueue four items: 5 7 4 2
    int inp;
    for(int i=0; i<4; i++)
    {
        cin >> inp;
        q.Enqueue(inp);
    }

    // Print if the queue is empty or not
    if(q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    // Print if the queue is full or not
    if(q.IsFull())
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        cout << "Queue is not Full" << endl;
    }

    // Enqueue another item: 6
    if(!q.IsFull())
    {
        q.Enqueue(6);
    }
    else
    {
        cout << "Queue Overflow" <<endl;
    }

    // Print the values in the queue (in the order the values are given as input)
    QueType <int> temp;
    int item;

    while(!q.IsEmpty())
    {
        q.Dequeue(item);
        cout << item << " ";
        temp.Enqueue(item);
    }

    while(!temp.IsEmpty())
    {
        temp.Dequeue(item);
        q.Enqueue(item);
    }
    cout << endl;

    // Print if the queue is full or not
    if(q.IsFull())
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        cout << "Queue is not Full" << endl;
    }

    // Enqueue another item: 8
    if(!q.IsFull())
    {
        q.Enqueue(8);
    }
    else
    {
        cout << "Queue Overflow" <<endl;
    }

    // Dequeue two items
    if(q.IsEmpty())
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        q.Dequeue(item);
        q.Dequeue(item);
    }

    // Print the values in the queue (in the order the values are given as input)
    while(!q.IsEmpty())
    {
        q.Dequeue(item);
        cout << item << " ";
        temp.Enqueue(item);
    }

    while(!temp.IsEmpty())
    {
        temp.Dequeue(item);
        q.Enqueue(item);
    }
    cout << endl;

    // Dequeue three items
    if(q.IsEmpty())
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        q.Dequeue(item);
        q.Dequeue(item);
        q.Dequeue(item);
    }

    // Print if the queue is empty or not
    if(q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    // Dequeue an item
    if(q.IsEmpty())
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        q.Dequeue(item);
    }

    /*
        Take an integer n from the user as input and use a queue to print binary
        values of each integer from 1 to n. Here is how it can be done
                o Create an empty queue
                o Enqueue the first binary number “1” to the queue.
                o Now run a loop for generating and printing n binary numbers
                    ▪ Dequeue and print the value
                    ▪ Append “0” at the dequeued value and enqueue it.
                    ▪ Append “1” at the dequeued value and enqueue it.

                    Sample input         Output
                    ------------         ------
                         10                 1
                                           10
                                           11
                                          100
                                          101
                                          110
                                          111
                                         1000
                                         1001
                                         1010
    */

    QueType<string> binary;
    int n;
    cin >> n;
    string temp2;

    binary.Enqueue("1");

    while (n--)
    {
        binary.Dequeue(temp2);
        string str1 = temp2;
        cout << str1 << endl;

        string str2 = str1;
        binary.Enqueue(str1.append("0"));
        binary.Enqueue(str2.append("1"));
    }
    return 0;
}
