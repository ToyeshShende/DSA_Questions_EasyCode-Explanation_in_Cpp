https://leetcode.com/problems/search-in-rotated-sorted-array/description/


 int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[low]<=nums[mid]) //left part is sorted
            {
                if(nums[mid]>target && nums[low]<=target){ //check if in range or not
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                 if(nums[mid]<target && nums[high]>=target){ //check if in range or not
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }


https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/
with duplicate

 bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        //previous code will not work if mid and low are equal example 1,0,1,1,1 right part is sorted not the left one  , example 3,1,2,3,3,3,3 will also give problem
        //solution is make low++ and high-- if this conditionn arrives
        while(low<=high){
            int mid=(low+high)/2;   
            if(nums[mid]==target)  return true;
            else if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                low++;
                high--;
            }
            else if(nums[mid]>=nums[low]){
                if(nums[low]<=target && nums[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[high]>=target && nums[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }                

            }
        }
        return false;
    }
