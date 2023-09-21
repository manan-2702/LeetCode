class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int> min,max;
        for(int i= 0;i<nums1.size();i++){
            max.push(nums1[i]);
            int t = max.top();
            max.pop();
            min.push((-1)*t);
            if(min.size()>max.size()){
                t = min.top();
                min.pop();
                max.push((-1)*t);
            }
        }
        for(int i= 0;i<nums2.size();i++){
            max.push(nums2[i]);
            int t = max.top();
            max.pop();
            min.push((-1)*t);
            if(min.size()>max.size()){
                t = min.top();
                min.pop();
                max.push((-1)*t);
            }
        }
        if(min.size()==max.size()){
            return ((double)max.top()+((-1)*(double)min.top()))/2;
        }else{
            return max.top();
        }
    }
};