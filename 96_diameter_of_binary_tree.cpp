https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Tree/problem/diameter-of-binary-tree



//  maximum diameter found in   left side of binary tree
                          //    right side of binary tree
                        //      found in both side merge of two which containg root
In the height function, the base case is when root is NULL, which means the current node does not exist. In this case, we return 0 because there are no nodes in the tree, and thus the height is 0.

When root is not NULL, we calculate the height of the left and right subtrees recursively using the height function. The height of a binary tree is defined as the maximum height between its left and right subtrees, plus 1 to account for the current node. Hence, the line return max(height(root->left), height(root->right)) + 1; is used to calculate the height.

In the diameterOfBinaryTree function, the logic is slightly different. Here, we are calculating the diameter of the binary tree, which is the maximum distance between any two nodes in the tree. The diameter can be achieved in three ways:

The diameter lies entirely in the left subtree.
The diameter lies entirely in the right subtree.
The diameter passes through the root node, in which case it consists of the height of the left subtree plus the height of the right subtree.
To calculate the diameter, we recursively find the diameters of the left and right subtrees using the diameterOfBinaryTree function. Then, we calculate opt3, which represents the diameter passing through the root, by adding the heights of the left and right subtrees (height(root->left) + height(root->right)).

Finally, we take the maximum of opt1, opt2, and opt3 to find the maximum diameter among the three possibilities, and return that as the final answe

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





In the base case, when root is NULL, we return a pair of values (0, 0) because there are no nodes in the subtree, and thus the diameter and height are both 0.

When root is not NULL, we recursively calculate the values for the left and right subtrees using the mp function. The height of a subtree is defined as the maximum height between its left and right subtrees, plus 1 to account for the current node. Hence, the line ans.second = max(left.second, right.second) + 1; is used to calculate the height.

For calculating the diameter, we have three possibilities, similar to the previous code you shared:

The diameter lies entirely in the left subtree.
The diameter lies entirely in the right subtree.
The diameter passes through the root node, in which case it consists of the sum of the heights of the left and right subtrees.
To calculate the diameter, we take the maximum diameter among these three possibilities and assign it to ans.first. The line ans.first = max(opt1, max(opt2, opt3)); is used for this purpose.

To summarize, when calculating the height in the mp function, you add "+1" to account for the current node. However, when calculating the diameter, the heights are already calculated with "+1" in the mp function, so you don't need to add it again when calculating opt3.

In the diameterOfBinaryTree function, you simply call mp(root).first to get the diameter of the binary tree. The .first is used to extract the first value (diameter) from the pair returned by mp.
 */  /*make afucntion that return  pair 
pair's first is diameter and second is height
for null case return both 0
three options
1)diamerter from left side of tree store inpair
2)diamerter from right side of tree store inpair
3)from both side take height logic
4)take max of all 3 for pair.first
5)take max of left and right for second 
6) call in main function return first of pair */
class Solution {
public:
    pair<int,int>mp(TreeNode* root){
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int>left=mp(root->left);
        pair<int,int>right=mp(root->right);
        int opt1=left.first;
        int opt2=right.first;
        int opt3=left.second+right.second;
        pair<int,int>ans;
        ans.first=max(opt1,max(opt2,opt3));
        ans.second=max(left.second,right.second)+1;
        return ans;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        return mp(root).first;
    }
};
