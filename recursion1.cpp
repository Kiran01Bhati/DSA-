#include<iostream>
using namespace std;

int i , n;
void f(int i, int n){
if(i > n){
    return;
}
else{
    cout<< i << endl;
  f( i+1, n);
}

}

int main (){
    cin >> n;
f(1, n);

}