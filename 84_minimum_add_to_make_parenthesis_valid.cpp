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


https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
  if(str.length()%2==1){
    return -1;
  }
  stack<char>s;
  for(int i=0;i<str.size();i++){
      if(str[i]=='{'){
        s.push(str[i]);
      }
      else if(!s.empty() && str[i]=='}'){
        if(s.top()=='{'){
          s.pop();
        }
        else{
          s.push(str[i]);
        }
      }
      else{
        s.push(str[i]);
      }

  }
  int a=0;
  int b=0;
  while(!s.empty()){
    if(s.top()=='{'){
      a++;
    }
    else{
      b++;
    }
    s.pop();
  }
  return (a+1)/2 + (b+1)/2;

}
