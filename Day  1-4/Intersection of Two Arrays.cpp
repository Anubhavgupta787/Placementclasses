class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    a.push_back(nums1[i]);
                }
            }
        }
        if(a.size()>0)
        {
            sort(a.begin(),a.end());
            ans.push_back(a[0]);
            for(int i=1;i<a.size();i++){
                if(a[i]!=a[i-1]){
                    ans.push_back(a[i]);
                }
            }
        }
        return ans;
        
    }
};