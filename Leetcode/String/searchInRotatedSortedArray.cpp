class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int size = nums.size();
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == target)
            {
                index = i;
            }
        }
        return index;
    }
};