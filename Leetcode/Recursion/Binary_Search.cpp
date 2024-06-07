#include <iostream>
#include <vector>
using namespace std;

int binatySearch(vector<int> arr, int s, int e, int key)
{
    // base case
    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    // case 2 -> Key Find
    if (arr[mid] == key)
        return mid;

    // usinng ternary operator

    // return (arr[mid] < key) ? binatySearch(arr, mid+1, e, key) : binatySearch(arr, s, mid-1, key);

    if (arr[mid] < key)
    {
        return binatySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binatySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 90};

    int target = 80;
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int ans = binatySearch(v, s, e, target);

    cout << "Answer is: " << ans << endl;

    return 0;
}