https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1



int maxlevel=0;
void Leftview(Node *root,int level,vector<int> &v){
    
    if(root==NULL){
        return;
    }
    if(v.size()==level){
        v.push_back(root->data);
        
    }
    Leftview(root->left,level+1,v);
    Leftview(root->right,level+1,v);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   vector<int> v;
   int level=0;
   Leftview(root,level,v);
   return v;
   
}
