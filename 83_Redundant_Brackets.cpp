https://practice.geeksforgeeks.org/problems/e015cb4d3f354b035d9665e7c8a54a7aefb1901b/1


int checkRedundancy(string s) {
        // code here
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                st.push(s[i]);
            }
             if(s[i]==')'){ //   () empty brackets means they are redundant
                if(st.top()=='('){
                    return 1; //yes
                }
                else{
                    while(st.top()!='('){
                        st.pop();
                    }
                }
                st.pop();
            }
            
        }
        if(!st.empty()){
                return 1;
            }
            return 0; //NO
    }




https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

int checkRedundancy(string s) {
        // code here
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                st.push(s[i]);
            }
             if(s[i]==')'){ //   () empty brackets means they are redundant
                if(st.top()=='('){
                    return 1; //yes
                }
                else{
                    while(st.top()!='('){
                        st.pop();
                    }
                }
                st.pop();
            }
            
        }
        
            return 0; //NO
    }
