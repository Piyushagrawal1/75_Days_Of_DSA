/*
    Enter the value of n: 12
    
    12 11 10 9 8 7 6 5 4 3 2 1
*/

#include <iostream>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 0)
        return;

    // processing
    cout << n << " ";

    // recursive relatiom
    printCounting(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    printCounting(n);
    return 0;
}