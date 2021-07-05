class Solution {
public:
    void dfs(vector<vector<int>>& image,int sr,int sc,int newColor,int r,int c,int source){
        if(sr<0 || sc<0 || sr>=r || sc>=c){
            return;
        }
        if(image[sr][sc]!=source){
            return;
        }
        image[sr][sc]=newColor;
        dfs(image,sr+1,sc,newColor,r,c,source);
        dfs(image,sr-1,sc,newColor,r,c,source);
        dfs(image,sr,sc+1,newColor,r,c,source);
        dfs(image,sr,sc-1,newColor,r,c,source);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])
            return image;
        int r=image.size();
        int c=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,newColor,r,c,source);
        return image;
        
    }
};