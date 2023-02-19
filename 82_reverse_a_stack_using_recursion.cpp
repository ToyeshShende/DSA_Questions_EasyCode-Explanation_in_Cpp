 stack<int>s;
    void Reverse(stack<int> &st){
          if(!st.empty()){
            s.push(st.top());
            st.pop();
            Reverse(st);
        }
        else{
            st=s;
            return;
        }
        
    }
