class Solution {
public:
    bool isPalindrome(int x) {
        stack<int> st;
        if(x<0){
            return false;
        }
        int y=x;
        while(x>0){
          st.push(x%10);
          x=x/10;
        }
        while(y>0){
            if(st.top()!=y%10)
                return false;
            st.pop();
            y=y/10;
        }
        return true;
    }
};