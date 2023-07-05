class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1,mA=0,cA;
        while(l<r){
            cA = (std::min(h[l],h[r]))*(r-l);
            mA = std::max(mA,cA);
            if(h[l]>h[r]){
                r--;
            }else{
                l++;
            }
        }
        return mA;
    }
};