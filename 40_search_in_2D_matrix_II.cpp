
https://leetcode.com/problems/search-a-2d-matrix-ii/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowid=0;
        int colid=col-1;
        while(colid>=0 && rowid<row){
            int ele=matrix[rowid][colid];
            if(ele==target){
                return true;
            }
            else if(ele>target){  //if we got element as 15 and target is 4 then it is obvious that it will not in that last column as all its element are getter than 15 
                colid--;
            }
            else{ // if ele is less than target and 15 is last elemtn of that row so we can state that all elements before 15 are must be less than 15 so take next row to find
                rowid++;
            }
        }
        return false;
    }
};
