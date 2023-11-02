#include <iostream>
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType <int> priq(15);

    if(priq.IsEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    cout << "Insert ten items in order they appear: ";

    for(int i=0; i<10; i++)
    {
        int inp;
        cin >> inp;
        priq.Enqueue(inp);
    }

    if(priq.IsEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    int item;
    priq.Dequeue(item);
    cout << item << endl;

    priq.Dequeue(item);
    cout << item << endl;

    // Another Task

    int N = 0, K = 0, total = 0;
    cout << endl << "Enter the number of bags: ";
    cin >> N;
    cout << "Enter the number of minutes you have: ";
    cin >> K;

    PQType <int> candies(N);

    cout << "Enter the number of candies in the bags within a space between them: ";
    for (int i = 0; i < N; i++)
    {
        int flag;
        cin >> flag;
        candies.Enqueue(flag);
    }

    cout << "Maximum number of candies you can eat: ";
    for (int i = K; i > 0; i--)
    {
        candies.Dequeue(item);
        total = total+item;
        candies.Enqueue(item / 2);
        continue;
    }

    cout << total << endl;

    return 0;
}
