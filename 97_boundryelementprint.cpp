https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
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
