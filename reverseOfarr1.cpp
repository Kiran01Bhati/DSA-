#include <iostream>
using namespace std;
void reverse(int arr[], int n) //arr[] is the array and  n is the size of array
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]); //main swapping logic
        start++;
        end--;
    }
}

void printingArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout<< endl;
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    reverse(arr, 5); // reverse
    printingArr(arr, 5); //print
}