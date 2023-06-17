class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int search;
        if(matrix.size()==0){return false;}
        if(matrix.size()==1){
            for(int i=0;i<matrix[0].size();i++){
                if(matrix[0][i]==target){return true;}
            }
            return false;
        }
        for(int i=1;i<matrix.size();i++){
            if(matrix[i][0]>target){
                search=i-1;
                break;
            }
            if(matrix[i][0]==target){
                return true;
            }
            if(i==matrix.size()-1){
                search=i;
            }
        }
        cout<<search;
        for(int i=0;i<matrix[search].size();i++){
            if(matrix[search][i]==target){return true;}
        }
        return false;
    }
};