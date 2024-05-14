class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int hash[256] = {0};           // mapping of each char of language 's' to language 't'
        bool isbCharMapped[256] = {0}; // stores if t[i] char already mapped with s[i]

        for (int i = 0; i < s.size(); i++)
        {
            if (hash[s[i]] == 0 && isbCharMapped[t[i]] == 0)
            {
                hash[s[i]] = t[i];
                isbCharMapped[t[i]] = true;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (char(hash[s[i]]) != t[i])
            {
                return false;
            }
        }
        return true;
    }
};