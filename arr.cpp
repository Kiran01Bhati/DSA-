#include <iostream>
using namespace std;



void printgArray(int arr[], int size){

    cout << " primary the array " << endl;
    // print array
     for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
cout << " printing done" << endl;
};

int main(){
int number[15];
    // initiallizing an array
    int second[3] = {5, 7, 11};
    
    printgArray(second, 15);

    int third[15] = {2, 5};
    int n = 15;

    printgArray(third, 15);

    //initiallizing all location with 0
    int fourth[10] = {1};
     n = 10;

     int  fourthSize = sizeof(fourth)/sizeof(int);

    printgArray(fourth, 10);

    
}
