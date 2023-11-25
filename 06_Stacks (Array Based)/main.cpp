#include <iostream>
#include "stacktype.cpp"

using namespace std;

int main()
{
    // Create a stack of integers
    StackType <int> s;

    // Check if the stack is empty
    if(s.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }

    // Push four items: 5 7 4 2
    int inp;
    for(int i=0; i<4; i++)
    {
        cin >> inp;
        s.Push(inp);
    }

    // Check if the stack is empty
    if(s.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty" << endl;
    }

    // Check if the stack is full
    if(s.IsFull())
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }

    // Print the values in the stack (in the order the values are given as input)
    StackType <int> temp;

    while(s.IsEmpty() == false)
    {
        temp.Push(s.Top());
        s.Pop();
    }

    while (temp.IsEmpty() == false)
    {
        s.Push(temp.Top());
        cout << temp.Top() << " ";
        temp.Pop();
    }
    cout << endl;

    // Push another item: 3
    s.Push(3);

    // Print the values in the stack
    while(s.IsEmpty() == false)
    {
        temp.Push(s.Top());
        s.Pop();
    }

    while (temp.IsEmpty() == false)
    {
        s.Push(temp.Top());
        cout << temp.Top() << " ";
        temp.Pop();
    }
    cout << endl;

    // Check if the stack is full
    if(s.IsFull())
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }

    // Pop two items
    s.Pop();
    s.Pop();

    // Print top item
    cout << s.Top() << endl;

    /*

        Take strings of parentheses from the user as input and use a
        stack to check if the string of parentheses is balanced or not

             Sample input                        Output
             ------------                        ------
                  ()                            Balanced
            (())()(()())()                      Balanced
              (())()((()                      Not balanced
              (())))((()                      Not balanced

    */

    StackType<char> parenthesesChecker;

    string str;
    int counter=4;

    while(counter--)
    {
        cin >> str;

        for (int i = 0; str[i] != NULL; i++)
        {
            char flag = str[i];

            if (flag == '(')
            {
                parenthesesChecker.Push(flag);
            }
            try
            {
                if (flag == ')')
                    parenthesesChecker.Pop();
            }
            catch (EmptyStack)
            {
                cout << "Not balanced" << endl;
            }
        }

        if (parenthesesChecker.IsEmpty())
        {
            cout << "Balanced" << endl;
        }
        else
        {
            cout << "Not balanced" << endl;
        }
    }
    return 0;
}
