https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1
Node* temp = NULL;
int ans=0;
Node* kthAncestorDFS(Node *root, int node , int &k)
{  
    // Base case
    if (!root)
        return NULL;
     
    if (root->data == node||
       (temp =  kthAncestorDFS(root->left,node,k)) ||
       (temp =  kthAncestorDFS(root->right,node,k)))
    {  
        if (k > 0)       
            k--;
         
        else if (k == 0)
        {
            // print the kth ancestor
            
            ans=root->data;
            // return NULL to stop further backtracking
            return NULL;
        }
         
        // return current node to previous call
        return root;
    }
}
int kthAncestor(Node *root, int k, int node)
{
   Node *n= kthAncestorDFS(root,node ,k);
   
    if (n)
        return -1;
     else
        return ans;
}
