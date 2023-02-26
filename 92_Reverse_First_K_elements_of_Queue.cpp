
https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1



vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
     
    queue<long long>q;
    vector<long long>ans; 
   //for only first window
       for(int i=0;i<k;i++){
           if(a[i]<0){
               q.push(a[i]);
           }
       }
       if(!q.empty()){
           ans.push_back(q.front());
       }
       else{
       
            ans.push_back(0);
           
       }
       //reamining elements
       int j=k;
       int i=0;
       while(j<n){
           if(!q.empty() && a[i]==q.front()){
                q.pop(); 
            
           }
           i++;
           if(a[j]<0){
               q.push(a[j]);
               
           }
           j++;
           if(q.empty()){
               ans.push_back(0);
           }
           else{
               ans.push_back(q.front());
           }
       }
           return ans;
                                                 
 }
