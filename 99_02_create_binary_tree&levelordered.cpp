/*for level order take one root and push in queue then choose queue front print it and push that root's left and right 
element again choose left choose root push left and right until queue gets empty;*/
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
        
    }
    
};
Node * buildtree(Node *root){
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter left of"<<data<<" ";
    
    root->left=buildtree(root->left);
     cout<<"Enter right of"<<data<<" ";
    root->right=buildtree(root->right);
    return root;
}

void levelOrderTraversal(Node *root) {
   

   
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        
        for (int i = 0; i < levelSize; i++) {
            Node *current = q.front();
            cout << current->data << " ";
            
            if (current->left != NULL)
                q.push(current->left);
            if (current->right != NULL)
                q.push(current->right);

            q.pop();
        }
        
        cout << endl;
    }
   
}


int main()
{
    Node *root=NULL;
    root=buildtree(root);
    cout<<"level order"<<endl;
    levelOrderTraversal(root);
    

    return 0;
}
