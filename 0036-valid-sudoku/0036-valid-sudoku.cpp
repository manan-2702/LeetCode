class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> mst;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(!mst.insert("row"+to_string(i)+to_string(board[i][j])).second||!mst.insert("col"+to_string(j)+to_string(board[i][j])).second||!mst.insert("grid"+to_string((i/3)*3+(j/3))+to_string(board[i][j])).second){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
