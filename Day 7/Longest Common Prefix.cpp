class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m=INT_MAX;
        int n=strs.size();
        if(strs.size()==0)
            return "";
        string st=strs[0];
        for(int i=1;i<n;i++){
            int j=0,k=0,a=0;
            while(j<st.size() and k<strs[i].size()){
                if(st[j]==strs[i][k])
                    a++;
                else
                    break;
                j++;
                k++;
            }
            m=min(m,a);
            
        }
        return st.substr(0,m);
        
    }
};