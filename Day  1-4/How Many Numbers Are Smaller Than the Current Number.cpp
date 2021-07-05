class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a(101);
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int freq=0;
            for(int j=0;j<nums[i];j++){
                freq+=a[j];
            }
            ans.push_back(freq);
        }
        return ans;
        
        
    }
};