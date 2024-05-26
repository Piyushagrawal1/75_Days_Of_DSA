// https://gist.github.com/Piyushagrawal1/f39d157139ad2166482983cf1cd4feae

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int n = nums.size();

        int closestSum = 1000000;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            int l = i + 1;
            int r = n - 1;

            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if (abs(target - sum) < abs(target - closestSum))
                {
                    closestSum = sum;
                }

                if (sum > target)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        return closestSum;
    }
};
