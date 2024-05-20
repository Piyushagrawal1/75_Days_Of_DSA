class Solution
{
public:
    vector<int> twoPtrMethod(vector<int> &arr, int k, int x)
    {
        int l = 0, h = arr.size() - 1; // Declared and initialized 'h'
        while (h - l >= k)
        {
            if (x - arr[l] > arr[h] - x)
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        vector<int> ans;
        for (int i = l; i <= h; i++)
        {                          // Changed 'i' to 'l' in the loop condition
            ans.push_back(arr[i]); // Added semicolon at the end of the line
        }
        return ans;
        // ye bhi kr sakte hai upar vale vector ki jagah👇🏻
        //  return vector<int>{arr.begin() + l, arr.begin() + h + 1};
    }

    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        return twoPtrMethod(arr, k, x); // Added semicolon at the end of the line and corrected variable usage
    }
};