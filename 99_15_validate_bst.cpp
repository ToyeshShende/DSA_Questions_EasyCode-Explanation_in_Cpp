 bool isBST(TreeNode* root,long long int mini,long long int maxi){
        if(root==NULL){
            return true;
        }
       
        if(root->val>mini && root->val <maxi){
            //going to left part if root is 5 then left is ranges from -infinity to 5
            bool lefty=isBST(root->left,mini,root->val);
            //going to left part if root is 5 then right is ranges from 5 to infinity
            bool righty=isBST(root->right,root->val,maxi);
            return lefty && righty;


        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        //apporach 1
         long int mini=-4294967296;
        long int maxi=4294967295;
        return isBST(root,mini,maxi);

        
    }

//inorder apporach
void solve(TreeNode * root,vector<int>&v){
       if(root==NULL){
           return ;
       }
       solve(root->left,v);
       v.push_back(root->val);
       solve(root->right,v);
   }
    bool isValidBST(TreeNode* root) {
          vector<int>v;
        solve(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                return false;
            }
        }
        return true;
    }
