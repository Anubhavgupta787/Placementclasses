class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_c=0;
        vector<bool> res;
        for(int i=0;i<candies.size();i++){
            max_c=max(max_c,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=max_c)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};