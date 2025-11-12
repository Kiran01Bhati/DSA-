#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "OLD VALUES: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // Reinitialize array using a loop
    // for(int i = 3; i < 5; i++){
    // arr[i] = 1;
    // }
      cout<< endl;
    cout << "NEW VALUES: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " ;
    }
   cout<< endl;

    // initiallizing an array
    int second[3] = {5, 7, 11};

    //accessing an element 
    cout<<"value at 2nd index :" << second[2] << endl;


    int third[15] = {2, 5};
    int n = 15;
    cout<< " print the array: ";
    for(int i = 0; i<n; i++){
        cout << third[i] << " ";

    }

    //initiallizing all location with 0
    int fourth[10] = {0};
    n = 10;
    cout<<  " print the array: ";
    for(int i = 0; i<n; i++){
        cout << fourth[i] << " ";

    }
}
