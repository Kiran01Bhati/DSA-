#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        //  space print karo

        int space = 1;
        while (space < row)
        {
            cout << " ";
            space = space + 1;
        }

        // starsprint karlo
        int col = row;
       
        while (col <= n)
        {
    
            cout<<col;
           
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
