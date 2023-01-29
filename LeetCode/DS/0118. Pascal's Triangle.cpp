class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p_triangle(numRows);
        p_triangle[0].push_back(1);
        for(size_t i=1; i<numRows; i++){
            p_triangle[i].push_back(1);
            for(size_t j=1;j<i;j++){
                p_triangle[i].push_back(p_triangle[i-1][j-1] + p_triangle[i-1][j]);
            }
            p_triangle[i].push_back(1);
        }
        return p_triangle;
    }
};