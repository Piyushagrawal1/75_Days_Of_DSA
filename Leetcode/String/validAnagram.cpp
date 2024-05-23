class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // brute force approach
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s == t;

        // counting method
        int freqTable[256] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            freqTable[s[i]]++;
        } // O(n)

        for (int i = 0; i < t.size(); i++)
        {
            freqTable[t[i]]--;
        } // O(m)

        for (int i = 0; i < 256; i++)
        {
            if (freqTable[i] != 0)
            {
                return false;
            }
        } // O(256)
        return true;
    }
};