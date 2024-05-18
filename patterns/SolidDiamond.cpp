/*
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper part of the pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
