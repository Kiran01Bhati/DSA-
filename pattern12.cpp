#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
int value = 1;
    int row = 1;

    while (row <= n)
    {
        //  space print karo

        int space = 1;
        while (space <= n-row)
        {
            cout << " ";
            space = space + 1;
        }

        // starsprint karlo
        int col = 1;
       
        while (col <= row)
        {
    
            cout<<value;
             value = value + 1;
              col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
