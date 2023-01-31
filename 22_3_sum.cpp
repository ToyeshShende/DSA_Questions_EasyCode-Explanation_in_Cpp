https://leetcode.com/problems/3sum/



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int low=i+1;
            
            int high=nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                
                if(sum>0){
                    high--;
                    
                }
                else if(sum<0){
                    low++;
                }
                else{
                    vector<int>v={nums[i],nums[low],nums[high]};
                    res.push_back(v);
                    while(low<high && nums[low]==nums[low+1])low++;    //to avoid repetation of same pair
                    while(low<high && nums[high]==nums[high-1])high--;
                    
                    low++;
                    high--;
                }}
            }
        return res;
    }
};
