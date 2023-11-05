#include <iostream>
#include <math.h>

using namespace std;

int fib(int n)
{
    if (n <= 0)
    {
        return -1;                              // Invalid input
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int sumOfDigits(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return (x%10)+ sumOfDigits(x/10);
    }
}

int findMin(int a[], int size)
{
    if (size == 1)
        return a[0];
    return min(a[size-1], findMin(a, size-1));
}

double sumOfSeries(int n)
{
    if (n == 0)
        return 1;
    else
        return 1.0 / pow(2, n) + sumOfSeries(n - 1);
}

int main()
{
    // First Task
    cout << "Fibonacci: " << fib(3) << endl;
    cout << "Fibonacci: " << fib(6) << endl;

    // Second Task
    cout << endl;
    cout << "Factorial: " << factorial(3) << endl;
    cout << "Factorial: " << factorial(4) << endl;

    // Third Task
    cout << endl;
    cout << "Sum of the digits is: " << sumOfDigits(1234) << endl;
    cout << "Sum of the digits is: " << sumOfDigits(358) << endl;

    // Fourth Task
    int a[5] = {6, 3, 3, 8, 2};
    cout << endl;
    cout << "Minimum number: " << findMin(a, 5) << endl;

    // Sixth Task
    cout << endl;
    cout << "Sum of the following series: " << sumOfSeries(0) << endl;
    cout << "Sum of the following series: " << sumOfSeries(1) << endl;
    cout << "Sum of the following series: " << sumOfSeries(2) << endl;
    cout << "Sum of the following series: " << sumOfSeries(3) << endl;

}
