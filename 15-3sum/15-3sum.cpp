class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int high=nums.size()-1,low=i+1;
            while(high>low){
                int sum=nums[low]+nums[high]+nums[i];
                if(sum>0){
                    high--;
                }else if(sum<0){
                    low++;
                }else{
                    ans.push_back({nums[low],nums[high],nums[i]});
                    int dupl_low=nums[low],dupl_high=nums[high];
                    while(low<high&&dupl_low==nums[low]){
                        low++;
                    }
                    while(low<high&&dupl_high==nums[high]){
                        high--;
                    }
                }
            }
        }
        return ans;
        
        
        
        
        
        
        // vector<int> temp;
        // vector<vector<int>> ans;
        // int temp1=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         temp1 = i;
        //         break;
        //     }
        // }
        // for(int i=nums.size()-1;i>temp1;i--){
        //     for(int j=0;j<=temp1;j++){
        //         int sub1 = nums[i]+nums[j];
        //         int t=j;
        //         if(sub1<0){
        //             continue;
        //         }
        //         for(int k=0;k<=temp1;k++){
        //             int sub2 = sub1+nums[k];
        //             if(sub2==0&&t!=k){
        //                 temp.push_back(nums[i]);
        //                 temp.push_back(nums[j]);
        //                 temp.push_back(nums[k]);
        //                 // temp.push_back(temp1);
        //                 ans.push_back(temp);
        //                 temp.clear();
        //                 // return ans;
        //             }
        //         }
        //     }
        // }
        // return ans;
    }
};