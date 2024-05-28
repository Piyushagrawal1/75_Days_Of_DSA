#include <iostream>
using namespace std;

int fibo(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    // PR -> f(n) = f(n-1) + f(n-2)
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cout << "Enter the term you want to see: " << endl;
    cin >> n;

    int ans = fibo(n);
    cout << "th term is: " << ans << endl;
    return 0;
}