#include<iostream>
using namespace std;
int main (){

    int n;
    cin>>n;

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=row){
        cout<< "*";  // cout row kr denge toh row ka no. print goga
        col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}