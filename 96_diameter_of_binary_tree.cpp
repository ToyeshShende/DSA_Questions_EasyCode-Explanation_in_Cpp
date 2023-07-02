https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Tree/problem/diameter-of-binary-tree



//  maximum diameter found in   left side of binary tree
                          //    right side of binary tree
                        //      found in both side merge of two which containg root


class Solution {
  public:
  int height(Node *root){
      if(root==NULL){
          return 0;
      }
      int lefty=height(root->left);
      int righty=height(root->right);
      return max(lefty,righty)+1;   // for leetcode question no need to add 1
  }
    
    int diameter(Node* root) {
        if(root==NULL){
            return 0;
        }
        int a=diameter(root->left);
        int b=diameter(root->right);
        int c= (height(root->left)+1+ height(root->right));;
        return max(a,max(b,c));
    }
};
