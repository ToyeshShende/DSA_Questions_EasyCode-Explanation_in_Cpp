![image](https://github.com/ToyeshShende/DSA_Questions_EasyCode-Explanation_in_Cpp/assets/119116915/5dd3e297-4895-4025-a389-2587521a1975)

void solve(Node *root, int &maxl,int currl,int &maxsum,int currsum){
        //got leaf node
        if(root==NULL){
            if(maxl<currl){
                maxl=currl;
                maxsum=currsum;
            }
            else if(currl==maxl){
                maxsum=max(maxsum,currsum);
            }
            return;
        }
        currsum+=root->data;
        solve(root->left,maxl,currl+1,maxsum,currsum);
        solve(root->right,maxl,currl+1,maxsum,currsum);
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        int maxl=0;
        int currl=0;
        int maxsum=0;
        int currsum=0;
        solve(root,maxl,currl,maxsum,currsum);
        return maxsum;
    }
