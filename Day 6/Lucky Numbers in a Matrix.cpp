class Solution {
public
    vectorint luckyNumbers (vectorvectorint& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vectorint res;
        for(int i=0;in;i++){
            int index=-1;
            int min=100000;
            for(int j=0;jm;j++){
                if(matrix[i][j]min){
                    min=matrix[i][j];
                    index=j;
                }
            }
        
        int max=-1;
        for(int j=0;jn;j++){
            if(matrix[j][index]max){
                max=matrix[j][index];
            }
        }
        if(max==min)
            res.push_back(max);
        }
        return res;
        
            
    }
};