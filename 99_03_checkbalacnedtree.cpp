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
