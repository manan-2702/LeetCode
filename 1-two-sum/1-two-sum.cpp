class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<unsigned int,unsigned int> umap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp = target - nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(temp==nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
                
        }
        return ans;
    }
};