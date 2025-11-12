#include<iostream> 
using namespace std;

void swapAlternate( int arr[], int n){
    for(int i =0; i<n -1; i += 2){

    
    swap(arr[i],arr[i+1]);
    }
}


void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main (){
    int arr[]  { 10, 30, 50, 70, 100};
    int even[] = {1,2,3,4,5,6};

    swapAlternate(even, 6);
    printArray(even,6);
}
