class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int height = matrix.size();
        for(int i =0;i<height;i++){
            int left=0;
            int right =matrix[i].size()-1;
            while(left<=right){
                int mid= (left+right)/2;
                if(matrix[i][mid]==target){
                    return true;
                }else if(target<matrix[i][mid]){
                    right = mid-1;
                }else{
                    left=mid+1;
                }
            }
        }
        return false;
    }
};