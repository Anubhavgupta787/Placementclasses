class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> v;
        for(int i=0;i<12;i++){
            bitset<4> hr(i);
            for(int j=0;j<60;j++){
                bitset<6> m(j);
                if(hr.count()+m.count()==turnedOn){
                    string hour=to_string(i);
                    string mint=(j<10)?":0"+to_string(j):":"+to_string(j);
                    v.push_back(hour+mint);                
                }
            }
        }
        return v;
    }
};