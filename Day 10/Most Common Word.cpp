class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> ban;
        int c=0;
        string word;
       
        int n=paragraph.length();
        
        for(int i=0;i<n;i++){
            string word="";
            while(i<n && isalpha(paragraph[i])){
                paragraph[i]=tolower(paragraph[i]);
                word.push_back(paragraph[i]);
                i++;
            }
            if(word!="")
                ban[word]++;
        }
        for(int j=0;j<banned.size();j++)
            ban.erase(banned[j]);
        for(auto it: ban){
            if(c<it.second){
                word=it.first;
                c=it.second;
            }
        }
        
        return word;
    }
};