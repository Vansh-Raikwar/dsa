class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> vec;
        int sr=0, er=m-1, sc=0, ec=n-1;
        while(sr<=er && sc<=ec){
            //top
            for(int i=sc;i<=ec;i++){
                vec.push_back(matrix[sr][i]);
            }
            //right
            for(int i=sr+1;i<=er;i++){
                vec.push_back(matrix[i][ec]);
            }
            if(sr<er){
            //bottom
            for(int i=ec-1;i>=sc;i--){
                vec.push_back(matrix[er][i]);
            }
            }
            //left
            if(sc<ec){
            for(int i=er-1;i>sr;i--){
                vec.push_back(matrix[i][sc]);
            }
            }
            sr++;er--;sc++;ec--;
        }
        return vec;
    }
};