#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Character is Uppercase" << endl;
    }
    // Check if lowercase
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is Lowercase" << endl;
    }
    // Check if numeric
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Character is Numeric" << endl;
    }
    else
    {
        cout << "Character is a special character" << endl;
    }

    return 0;
}
