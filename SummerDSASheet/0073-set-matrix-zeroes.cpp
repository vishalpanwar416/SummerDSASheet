class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        unordered_set<int> row,col;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }   
            }
        }
        for(auto i:row)
        {
            for(int j=0;j<n;j++)
            matrix[i][j]=0;
        }
        for(int i=0;i<m;i++)
        {
            for(auto j:col)
            matrix[i][j]=0;
        }
    }
};