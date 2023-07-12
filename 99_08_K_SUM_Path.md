![image](https://github.com/ToyeshShende/DSA_Questions_EasyCode-Explanation_in_Cpp/assets/119116915/d57f18a6-8277-49e8-877d-241021fe0619)

void solve(vector<int>v,Node *root,int k,int &count){
       if(root==NULL){
           return ;
       }
       v.push_back(root->data);
       solve(v,root->left,k,count);
       solve(v,root->right,k,count);
       int n=v.size();
       long long sum=0;
       for(int i=n-1;i>=0;i--){
           sum+=v[i];
           if(sum==k){
               count++;
           }
       }
       v.pop_back();
   }
    int sumK(Node *root,int k)
    {
        int count=0;
        vector<int>v;
        
       solve(v,root,k,count);
       return count;
    }
O(N*N)

for gfg 
o(N)

 void solve(unordered_map<int,int>&mp,Node *root,int k,int &count,int prev_sum){
       if(root==NULL){
           return ;
       }
       int sum=prev_sum+root->data;
       
      if(mp.find(sum-k)!=mp.end()){    //find in map that if difference found means uf we add that found varible with csum we can get k
          count+=mp[sum-k];  //add count of that sum it will be offcours the number of difference pathsgives thatsum
      }
      if(sum==k){
          count++;
      }
          mp[sum]++;
       solve(mp,root->left,k,count,sum);
       solve(mp,root->right,k,count,sum);
     
      mp[sum]--;
     
      
       
      
   }
    int sumK(Node *root,int k)
    {
        int count=0;
        unordered_map<int,int>mp;
        
        
       solve(mp,root,k,count,0);
       return count;
    }
