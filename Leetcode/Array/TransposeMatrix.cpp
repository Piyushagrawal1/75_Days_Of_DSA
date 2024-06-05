class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> result(cols, vector<int>(rows, 0)); // Declare result with dimensions cols x rows
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};