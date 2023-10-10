/*
    Task:
    2. Using the new operator, allocate a two-dimensional character array. Again the number of
    rows and columns is going to be provided by the user as input. All of the rows are the
    same size. Take character strings as input from the user and then print the strings. Finally,
    de-allocate the array using the delete operator
*/

#include <iostream>
using namespace std;

int main()
{
    int row=0,col=0;

    cout << "Enter the number of row: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;

    //Creating a 2D array

    int **arr = new int *[row];
    for(int i=0;i<row;i++)
    {
        arr[i] = new int[col];
    }

    //Taking input from user
    cout << "Enter the elements for the 2D array: ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    //Printing the 2D array
    cout << "2D Array: " <<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << arr[i][j] <<"   ";
        }
        cout << endl;
    }

    //De-allocating the memory
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}
