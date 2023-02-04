 https://leetcode.com/problems/subsets/submissions/891176109/


class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&final,vector<int>out,int index){
        //base case
        if(index>nums.size()-1){
            final.push_back(out);
             // when we reach till leaf node so mutiple brances of root will reach to leaf node ///and will be pushed back in final
            return;
        }
        //excluding 
        solve(nums,final,out,index+1);

        //including
        out.push_back(nums[index]);
        solve(nums,final,out,index+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>final;
        vector<int>out;
        solve(nums,final,out,0);
        return final;
    }
};
