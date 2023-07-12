https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(p==root || q==root){ //got the p or q just return root to the upwardside 
            return root;
        }   
        TreeNode* lac=lowestCommonAncestor(root->left,p,q);
        TreeNode* rac=lowestCommonAncestor(root->right,p,q);
        if(lac!=NULL && rac!=NULL){ //if found that both left and right return have p and q
            return root;
        }

        
        if(!lac){    //found p or q in right side but not in left side 
            return rac;
        }
        else{
            return lac;
        }
    }
