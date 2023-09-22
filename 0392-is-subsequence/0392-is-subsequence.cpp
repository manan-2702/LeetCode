class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st;
        for(int i=s.size()-1;i>=0;i--){
            st.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(st.empty()){
                break;
            }
            if(t[i]==st.top()){
                st.pop();
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};