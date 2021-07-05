class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0,mx1=0;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            mx1=0;
            for(int j=0;j<accounts[i].size();j++){
                mx1+=accounts[i][j];
            }
            if(mx<mx1){
                mx=mx1;
            }
            
        }
        return mx;
    }
};