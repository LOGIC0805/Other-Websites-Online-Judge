class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[0].size() ;j++){
                if(target < matrix[i][j]){
                    break;
                }else{
                    if(target > matrix[i][matrix[0].size()-1]){
                        continue;
                    }
                    if(target == matrix[i][j]){
                        flag = true;
                        break;
                    }
                }
            }
        }
        return flag;
    }
};