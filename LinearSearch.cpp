#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 6, -4, 6, 10, 12, 16, 0, 2, 1};
    // whether 1 is present in it or not ?

    cout << "Enter the element to be searched " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is found " << endl;
    }

    else
    {
        cout << "Key is  not found " << endl;
    }

    return 0;
}