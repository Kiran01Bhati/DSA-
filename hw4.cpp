#include <iostream>
using namespace std;
int main()
{
    int choice = 1;
    int amount = 1330;
    int n100, n50, n20, n10, n1;
    switch (choice)
    {
    case 1:
        n100 = amount / 100;   // quotient
        amount = amount % 100; // remainder
        cout << "1 rs note " << n100 << endl;

    case 2:
        n50 = amount / 50;
        amount = amount % 50;
        cout << "1 rs note " << n50 << endl;

    case 3:
        n20 = amount / 20;
        amount = amount % 20;
        cout << "1 rs note " << n20 << endl;

    case 4:
        n1 = amount / 1;
        cout << "1 rs note " << n1 << endl;
        break;
    }
}