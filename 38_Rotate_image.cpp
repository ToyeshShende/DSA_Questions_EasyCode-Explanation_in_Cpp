https://leetcode.com/problems/rotate-image/description/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);  //take transpose 
            }
        }
        for(int i=0;i<matrix.size();i++){     //reverse vector of vector
            reverse(matrix[i].begin(),matrix[i].end());
        }

        


    }
};
