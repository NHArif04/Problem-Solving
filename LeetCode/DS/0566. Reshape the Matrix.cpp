class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size()) return mat;
        vector<vector<int>> output(r, vector<int>(c, 0));
        int row = 0;
        int col = 0;

        for(int i = 0; i< mat.size(); i++){
            for(int j = 0; j< mat[i].size(); j++){
                if(col == c) {row++; col = 0;}
                output[row][col] = mat[i][j];
                col++;        
            }
        }
        return output;
    }
};