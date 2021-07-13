class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> v;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                v.push_back(i);
            }
            
        }
        int j=0,temp,t=0;
        for(int i=0;i<n;i++){
            if(v[j]<i){
                t=j;
                j++;
                if(j>v.size()-1)
                    j=t;
            }
            temp=min(abs(i-v[j]),abs(i-v[t]));
            ans.push_back(temp);
        }
        return  ans;
    }
};