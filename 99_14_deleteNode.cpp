
https://leetcode.com/problems/delete-node-in-a-bst/submissions/
// for 2 child 
//either take root's left maximum or take root's right minimum and replace value with root
//and delete that minimum elemtent by adding that in recursion


int minval(TreeNode* curr){
       int mini=0;
        while(curr!=NULL ){
            mini=curr->val;
            curr=curr->left;
        }
        return mini;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
            
        }
        if(root->val>key){
            //left part
            root->left=deleteNode(root->left,key);
           
           
        }
        else if(root->val<key){
            //right part
            root->right=deleteNode(root->right,key);
          
        }
        else{
            //equal
            //0 child
            if(root->left==NULL && root->right==NULL){
                 delete root;
                root = NULL;
                
            }

            //1 child
            else if( root->left==NULL){
                //left is null
                TreeNode *temp=root->right;
                delete root;
                return temp;
            }
            else if( root->right==NULL){
                //right is null
                TreeNode *temp=root->left;
                delete root;
                cout<<"ok";
                return temp;
            }
            else{
                //both child are not null
                int mini=minval(root->right);
                root->val=mini;
                root->right=deleteNode(root->right,mini);
                  
            }
         
        }
        return root;
        
        
    }
