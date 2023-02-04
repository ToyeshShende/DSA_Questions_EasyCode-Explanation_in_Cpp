https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int j=0;
        for(int i=0;i<t.length();i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        if(j!=n){  // as string transversal doesn't reach end hence it is stop where the element of s string doesn't match with t string hence s is not subsequence
            return false;
        }
        return true;
    }
};
