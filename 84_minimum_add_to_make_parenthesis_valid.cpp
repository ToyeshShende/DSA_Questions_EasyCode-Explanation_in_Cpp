https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/901623473/


class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')' && !st.empty()){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    count++;
                }
            }
            else{
                count++;
            }
        }
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
        
    }
};
