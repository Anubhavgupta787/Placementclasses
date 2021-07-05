class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int nr=grid.size();
        int nc=grid[0].size();
        int l;
        vector<int> ans;
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                ans.push_back(grid[i][j]);
            }
        }
        int m=ans.size();
        l=k;
        if(k>m)
            l=m%k;
        for(int i=0;i<k;i++){
            rotate(ans.begin(),ans.begin()+ans.size()-1,ans.end());
        }
        int c=0;
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                grid[i][j]=ans[c];
                c++;
            }
        }
        return grid;
    }
};