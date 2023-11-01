#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

void solve(TreeType<int> &newTree, int array[], int start, int end)
{
    int mid = (start + end) / 2;
    newTree.InsertItem(array[mid]);

    if (start == end)
        return;

    if (start < mid)
        solve(newTree, array, start, mid - 1);

    solve(newTree, array, mid + 1, end);
}

int main()
{
    TreeType <int> tree;

    if(tree.IsEmpty())
    {
        cout << "Tree is empty" << endl;
    }
    else
    {
        cout << "Tree is not empty" << endl;
    }

    int inp;
    cout << "Insert ten items within space between them: ";
    for(int i=0; i<10; i++)
    {
        cin >> inp;
        tree.InsertItem(inp);
    }
    cout << endl;

    if(tree.IsEmpty())
    {
        cout << "Tree is empty" << endl;
    }
    else
    {
        cout << "Tree is not empty" << endl;
    }

    cout << tree.LengthIs() << endl;

    int item1=9,item2=13;
    bool found=true;

    tree.RetrieveItem(item1,found);
    if(found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    tree.RetrieveItem(item2,found);
    if(found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    cout << "Inorder Traversal: ";
    tree.ResetTree(IN_ORDER);
    bool finish = false;
    while (!finish)
    {
        int value;
        tree.GetNextItem(value, IN_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    cout << "Preorder Traversal: ";
    tree.ResetTree(PRE_ORDER);
    finish = false;
    while (!finish)
    {
        int value;
        tree.GetNextItem(value, PRE_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.ResetTree(POST_ORDER);
    finish = false;
    while (!finish)
    {
        int value;
        tree.GetNextItem(value, POST_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    tree.MakeEmpty();

    TreeType<int> sequenceTree;
    int num = 10;
    int sequence[] = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};

    for (int i = 0; i < num; i++)
    {
        sequenceTree.InsertItem(sequence[i]);
    }

    int n, arr[num + 10], index = 0;

    sequenceTree.ResetTree(IN_ORDER);
    finish = false;
    while (!finish)
    {
        sequenceTree.GetNextItem(n, IN_ORDER, finish);
        arr[index++] = n;
    }

    TreeType<int> newTree;

    solve(newTree, arr, 0, index - 1);

    newTree.ResetTree(PRE_ORDER);
    finish = false;
    cout << endl << "Sorted: ";
    while (!finish)
    {
        newTree.GetNextItem(n, PRE_ORDER, finish);
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
