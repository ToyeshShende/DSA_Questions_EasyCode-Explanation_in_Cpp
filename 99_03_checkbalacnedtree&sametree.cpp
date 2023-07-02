 int height(struct TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff){
            return true;
        }
        return false;

    }






int bal(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=bal(root->left);
        if(left==-1){
            return -1;
        }
        int right=bal(root->right);
        if(right==-1){
            return -1;
        }
        if(abs(right-left)>1){
            return -1;
        }
        else{
            return max(left,right)+1;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int flag=bal(root);
        if(flag==-1){
            return false;
        }
        return true;
    }
};




same tree
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if((p==NULL && q!=NULL )||(p!=NULL && q==NULL)){
            return false;
        }
        int left=isSameTree(p->left,q->left);
        int right=isSameTree(p->right,q->right);
        bool ch=p->val==q->val;
        if(ch && left && right){
            return true;
        }
        return false;
    }
