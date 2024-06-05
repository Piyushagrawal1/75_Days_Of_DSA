class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n = str.size();
        int i = 0;
        int j = n-1;
        
        
        while(i < j) {
            char ch = str[i];
            str[i] = str[j];
            str[j] = ch;
            i++;
            j--;
        }
        return str;
    }
    
};