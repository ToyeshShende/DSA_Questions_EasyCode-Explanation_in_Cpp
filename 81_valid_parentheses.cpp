class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(s.length()==0){
            return true;
        }
        if(s.length()%2!=0){
            return false;
        }
         stack<char> st ; 
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char ch1=st.top();
                if(ch==')' && ch1=='(' || ch==']' && ch1=='[' || ch=='}' && ch1=='{' ){
                    cout<<"yO";
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
        
        
    }
};
