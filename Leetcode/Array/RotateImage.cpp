class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        int n = matrix.size();
        // transpose
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse => 2D MATRIX ki sari rows ko
        for (int i = 0; i < n; i++)
        {
            // hr row ko reverse krna hai
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};