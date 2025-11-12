#include<iostream> 
using namespace std;

int main() {
    //int a;
    //cout << "Enter a number: ";
   // cin >> a;

    // Check if number is positive, negative, or zero
    /*if (a > 0) {
        cout << "A is positive" << endl;
    }
    else if (a < 0) {
        cout << "A is negative" << endl;
    }
    else {
        cout << "A is zero" << endl;
    }
*/

int a,b;


cout<<" Enter the value of a : "<< endl;
cin>>a;
cout<<" Enter the value of b : "<< endl;
cin>>b;
if(a>b) {
    cout<< "A is greater "<< endl;
}

if(b>a) {
    cout<< "B is greater "<< endl;
}
    return 0;
}
