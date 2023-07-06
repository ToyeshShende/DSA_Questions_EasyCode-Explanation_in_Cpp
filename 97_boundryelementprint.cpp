https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
 
void lefttransversal(Node *root,vector<int>&v){
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        v.push_back(root->data);
        if(root->left){
            lefttransversal(root->left,v);
        }
        else{
            lefttransversal(root->right,v);
        }
        
    }
    void leafnode(Node *root,vector<int>&v){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL ){
            v.push_back(root->data);
        }
        leafnode(root->left,v);
        leafnode(root->right,v);
    }
    void righttransversal(Node *root,vector<int>&v){
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
      
        if(root->right){
            righttransversal(root->right,v);
        }
        else{
            righttransversal(root->left,v);
        }
        v.push_back(root->data);
        
    }
    vector <int> boundary(Node *root)
    {
        //print all left except leaf
        //print all leaf
        //print all right except of leaf
        
        vector<int>v;
        if(root==NULL){
            return v;
        }
        v.push_back(root->data);
        lefttransversal(root->left,v);
        leafnode(root->left,v);
        leafnode(root->right,v);
        righttransversal(root->right,v);
        return v;
    }











///new 
void inorder(Node *root,vector<int>&ans){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
        }
        inorder(root->left,ans);
        inorder(root->right,ans);
        
    }
    void leftboundry(Node *root,vector<int>&v){
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return ;
        }
        v.push_back(root->data);
        if(root->left){
            leftboundry(root->left,v);
        }
        else{
            leftboundry(root->right,v);
        }
    }
    void rightboundry(Node *root,vector<int>&v){
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return ;
        }
       
        if(root->right){
            rightboundry(root->right,v);
        }
        else{
            rightboundry(root->left,v);
        }
         v.push_back(root->data);
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>v;
        if(root==NULL){
            return v;
        }
        v.push_back(root->data);
        leftboundry(root->left,v);
        
        
        
        Node *newleaf=root;
        inorder(newleaf->left,v);
        inorder(newleaf->right,v);
        rightboundry(root->right,v);
      
        
        return v;
        
        
        
    }
