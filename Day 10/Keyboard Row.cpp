class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> vec{2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        int n=words.size();
        vector<string> res;
        for(int i=0;i<n;i++){
            int x=vec[tolower(words[i][0])-'a'];
            int f=0;
            for(int j=1;j<words[i].size();j++){
                if(x!=vec[tolower(words[i][j])-'a']) 
                    f=1;
                
                
            }
            if(f==0)
                res.push_back(words[i]);
        }
        return res;
    }
};