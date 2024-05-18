
/*
     *     
    ***    
   *****   
  *******  
 ********* 
***********
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < ((2 * n) - 1); j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else if (k < 2 * i + 1)
            {
                cout << '*';
                k++;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}


// another method to do this pattern
/*
#include <iostream>

using namespace std;

int main() {
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i; j++) {
      cout << " ";
    }

    for (int k = 1; k <= 2 * i - 1; k++) {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
*/