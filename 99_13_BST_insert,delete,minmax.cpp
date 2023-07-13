
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
      public:
    int data;
    Node *left;
    Node *right;
  
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
    Node* insertintoBST(Node *root,int data){
        if(root==NULL){
            root=new Node(data);
            return root;
        }
        else if(root->data>data){
            //leftpart
            root->left=insertintoBST(root->left,data);
        }
        else {
            //rightpart
            root->right=insertintoBST(root->right,data);
        }
        return root;
}

void take_data(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
        
    }
}
void level(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; i++) {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";

            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        cout << endl;
    }
}

int main()
{
    Node *root=NULL;
    cout<<"Enter data into BST: ";
    take_data(root);
    level(root);

    return 0;
}

https://leetcode.com/problems/insert-into-a-binary-search-tree/description/

   TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            root=new TreeNode(val);
        }
        if(root->val>val){
            root->left=insertIntoBST(root->left,val);
        }
        else if(root->val<val){
            root->right=insertIntoBST(root->right,val);
        }
        return root;

    }

https://leetcode.com/problems/search-in-a-binary-search-tree/
  TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==val){
            return root;
        }
        if(val<root->val){
            return searchBST(root->left,val);
            }
        else{
            return searchBST(root->right,val);
        }
       
    }
