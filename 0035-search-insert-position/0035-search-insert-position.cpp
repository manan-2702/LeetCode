class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0,high=nums.size()-1;
        int ans;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans = mid;
                break;
            } else if (target<nums[mid]){
                high=mid-1;
                if(high<low){
                    ans= low;
                    break;
                }
            } else{
                low = mid+1;
                if(high<low){
                    ans= low;
                    break;
                }
            }
        }
        return ans;
    }
};