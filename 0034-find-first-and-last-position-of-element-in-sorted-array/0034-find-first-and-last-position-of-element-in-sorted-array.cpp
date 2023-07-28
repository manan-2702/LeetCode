class Solution {
public:
    int lowerBound(vector<int>& nums,int low,int high,int target){
        while(low<=high){
            int mid = (low+high)>>1;
            if(nums[mid]<target){
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int startpoint = lowerBound(nums,low,high,target);
        int endpoint = lowerBound(nums,low,high,target+1)-1;
        if(startpoint<nums.size()&&nums[startpoint]==target){
            return {startpoint,endpoint};
        }
        return {-1,-1};
    }
};