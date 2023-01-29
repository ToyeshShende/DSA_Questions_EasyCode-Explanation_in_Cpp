
//leetcode question

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        if(k>nums.size()){
            k=k%nums.size();      //This condition is must to remember because of they give k greater than size then it will give run time error 
        }
        for(int i=nums.size()-k;i<nums.size();i++){
            v.push_back(nums[i]);  //push last k elements

        }
        for(int i=0;i<nums.size()-k;i++){
            v.push_back(nums[i]);  //push remaining elements
        }
        nums.clear();   //delete all elements from orginal vector
        copy(v.begin(),v.end(),back_inserter(nums));  // copy all elements of v in to original num verctor
    }
};
