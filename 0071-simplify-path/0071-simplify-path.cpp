class Solution {
public:
    string simplifyPath(string path) {
        string result;
        stack<string> s;
        for(int i=0;i<path.size();i++){
            if(path[i]=='/'){
                continue;
            }
            string temp;
            while(i<path.size()&&path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }else if(temp==".."){
                if(!s.empty()){
                    s.pop();
                }
            }else{
                s.push(temp);
            }
        }
        while(!s.empty()){
            result='/'+s.top()+result;
            s.pop();
        }
        if(result==""){
            return "/";
        }
        return result;
    }
};