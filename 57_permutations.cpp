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
