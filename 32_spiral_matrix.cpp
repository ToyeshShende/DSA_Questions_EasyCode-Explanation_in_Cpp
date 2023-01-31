 https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans; 
        int srow=0;   //staring row
        int erow=matrix.size()-1;  //ending row
        int scol=0;   //staring col
        int ecol=matrix[0].size()-1;
        int total=(erow+1)*(ecol+1)-1;
        int count=0;

        while(total>=count){
            //staring row
            for(int index=scol;count<=total && index<=ecol;index++ ){  //count is always check to see the matrix is overflowing or not (going outof the bound)
                ans.push_back(matrix[srow][index]);
                count++;
            }
            srow++;  // as 3 is already printed so it should not repeate
            //ending column
            for(int index=srow;count<=total && index<=erow;index++){
                ans.push_back(matrix[index][ecol]);
                count++;
            }

            ecol--;
            //ending row
            for(int index=ecol;count<=total && index>=scol;index--){
                ans.push_back(matrix[erow][index]);
                count++;
            }
            erow--;
            //staring col
            for(int index=erow;count<=total && index>=srow;index--){
                ans.push_back(matrix[index][scol]);
                count++;
            }
            scol++;
           
            

        }
        return ans;
    }
};
