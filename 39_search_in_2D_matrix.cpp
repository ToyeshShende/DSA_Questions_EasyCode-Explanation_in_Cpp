https://leetcode.com/problems/search-a-2d-matrix/description/


//binary search in 2d matrix


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int col=matrix[0].size();
        int high=(matrix.size() * matrix[0].size())-1;
        while(low<=high){
            int mid=(low+high)/2;
            int element=matrix[mid/col][mid%col]; //to get the mid element example mid is 5th so we need first row which is calculated by mid/col=5/4=1  and column is calculated by mid%col=5%4=1  so we got matrix[1][1] which is 5th index
            if(element==target){
                return true;
            }
            else if(element>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
