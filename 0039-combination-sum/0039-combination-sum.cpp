class Solution {
public:
    void combination(vector<vector<int>>& ans,vector<int>& c,int target,vector<int>& curComb,int curIndex,int curSum){
        if(curSum>target) return;
        if(curSum==target){
            ans.push_back(curComb);
            return;
        }
        for(int i=curIndex;i<c.size();i++){
            curComb.push_back(c[i]);
            curSum+=c[i];
            combination(ans,c,target,curComb,i,curSum);
            curComb.pop_back();
            curSum-=c[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> curComb;
        combination(ans,c,target,curComb,0,0);
        return ans;
    }
};