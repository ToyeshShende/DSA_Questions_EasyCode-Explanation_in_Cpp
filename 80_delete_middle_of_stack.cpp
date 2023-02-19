void deleteMid(stack<int>&s, int n)
    {
        int mid=ceil((n+1)/2);
        stack<int>s1;
        
        int a=n-mid;
        while(a--){
            
            s1.push(s.top());
            s.pop();
            
        }
        s.pop(); // delete the middle
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
    }
