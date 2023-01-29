class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix[0].size();
        int low=0, mid, high=matrix.size()*n-1;
        while(low<=high){
            mid= low + (high-low)/2;
            if(matrix[mid/n][mid%n]==target) {
                return true;
            }
            else if(matrix[mid/n][mid%n]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};