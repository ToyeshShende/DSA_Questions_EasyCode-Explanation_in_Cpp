https://leetcode.com/problems/permutations/description/


// using stl function of c++
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>final;
        sort(nums.begin(),nums.end());
        final.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())){ // stl function next_permutation(arr.)
            final.push_back(nums);
        }
        return final;
    }
};


//using recursion 
class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&final,int index){
        if(index==nums.size()){
            final.push_back(nums);
            return ;
        }

        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            
            solve(nums,final,index+1);
            swap(nums[index],nums[i]); //backtracking
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>final;
        // vector<int>v;
        int index=0;
        solve(nums,final,index);
        return final;

    }
};
