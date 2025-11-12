#include <iostream>
using namespace std;
int main(){

    // Q. 1
   /*int a, b = 1;
    a = 10;
    if(++a)
    cout << b;
    else 
    cout << ++b;*/

    // Q.2
   /* int a = 1;
    int b =2;

    if( a-- > 0 && ++b > 2){
        cout << "stage1 -  Inside If ";
    } else
cout << "stage2 - Inside else ";

cout << a << " " << b << endl;
*/

    // Q.3
   /* int a = 1;
    int b =2;

    if( a-- > 0 || ++b > 2){
        cout << "stage1 -  Inside If ";
    } else
cout << "stage2 - Inside else ";

cout << a << " " << b << endl;*/
/*
Q. 4
int number = 3;
cout<< (25 * (++number));*/

//Q5. 
int a = 1;
int b = a++;
int c = ++a;
cout << b;
cout << c;
    return 0;
    
}