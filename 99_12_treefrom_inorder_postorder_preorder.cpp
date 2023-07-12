//from postorder and inorder
Node *ctree(int in[],int post[],int is,int ie,int & posti){
    int inindex;
    if(is>ie){
        return NULL;
    }
    Node *root=new Node (post[posti--]);
    for(int i=is;i<=ie;i++){
        if(in[i]==root->data){
            inindex=i;
            break;
        }
    }
    root->right=ctree(in,post,inindex+1,ie,posti);
    root->left=ctree(in,post,is,inindex-1,posti);
    
    return root;
    
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int posti=n-1;
    Node *root=ctree(in,post,0,n-1,posti);
    return root;
    
}



//from preorder and inorder
Node *solve(int in[],int pre[],int stin,int endin,int &indexpre,int n){
        if(indexpre>=n || stin>endin){ //reach at end
            return NULL;
        }
        int tempindx;
        Node *root=new Node(pre[indexpre++]);
        for(int i=stin;i<=endin;i++){
            if(root->data==in[i]){
                tempindx=i;
                break;
            }
        }
        root->left=solve(in,pre,stin,tempindx-1,indexpre,n);
        root->right=solve(in,pre,tempindx+1,endin,indexpre,n);
        return root;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
       int indexpre=0;
        solve(in,pre,0,n-1,indexpre,n);
        
    }
