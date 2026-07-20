class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();  // row
        int n = grid[0].size();  // column
        int size = m*n;
        k %= size;
        vector<int> temp(size);
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp[idx++] = grid[i][j];
            }
        }

        vector<vector<int>> ans(m,vector<int>(n));
        idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int oldIdx = ((idx-k)%size+size)%size;
                ans[i][j]=temp[oldIdx];
                idx++;
            }
        }
        return ans;
    }
};