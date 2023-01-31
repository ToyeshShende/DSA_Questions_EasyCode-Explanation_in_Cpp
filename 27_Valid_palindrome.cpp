Question link
https://leetcode.com/problems/valid-palindrome/description/

https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=1



class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 1) {
        return true;

    }
    transform(s.begin(),s.end(),s.begin(),:: tolower);   //convert whole string into lower case character
    string ans;
    for (auto i : s) {
      if (i <= 'z' && i >= 'a') {
          ans+=i;
      }                                        //check only for alphabets and numbers 
                                              //whole string is in lowercase so no need to check for uppercase character.
      if (i <= '9' && i >= '0') {
          ans+=i;
      }
    }
    int low=0;
    int high=ans.length()-1;
    while (high > low) {
        if(ans[low]!=ans[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
    
};
