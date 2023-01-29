
Question link:
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/



class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;   //3 4 5 1 2  as  5>1 so count will be incremented 
            }

        }
        if(nums[nums.size()-1]>nums[0]){
            count++;   // 3 4 5 1 2  as 2not greater than 3 so no  count++;
        }
        return count<=1;   //usally check for count==1 but there is exceptional condition also which is  1 1 1 as it is true but count remain zero in this case so take condition as count<=1
        
    }
};
