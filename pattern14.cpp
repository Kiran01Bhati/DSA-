#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n - row +1){

        cout << col<< " " ;
        col = col + 1;
        }
    //stars
    int k = 1;
    while(k <= 2 * (row - 1)) {
        cout<<"*" <<" ";
        k = k + 1;
    }

    // Right side numbers
    int l = n - row + 1;
    while(l >= 1){
        cout<< l <<" ";
        l--;
    }
cout<<endl;
row = row + 1;
}
return 0;
}

