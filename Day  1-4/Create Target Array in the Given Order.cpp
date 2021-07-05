class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans(nums.size(),-1);
        int i=0;
        while(i<index.size()){
            int INDEX=index[i];
            if(ans[INDEX]==-1){
                ans[INDEX]=nums[i];
            }else{
                for(int j=nums.size()-1;j>INDEX;j--){
                    ans[j]=ans[j-1];
                }
                ans[INDEX]=nums[i];
                
            }
            i++;
        }
        return ans;
    }
};