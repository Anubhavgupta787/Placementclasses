class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string str;
        s=s+"";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count++;
        }
        if(count==k){
            return str;
        }  
        str=str+s[i];
    }
        return str;
    }
    
};