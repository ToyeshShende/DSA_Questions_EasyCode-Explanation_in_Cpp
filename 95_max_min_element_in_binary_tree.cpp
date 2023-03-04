https://practice.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution
{
public:
    int findMax(Node *root)
    {
        if(root==NULL){
            return INT_MIN;
        }

        int maxl=findMax(root->left);
        int maxr=findMax(root->right);
         int res=max(root->data,max(maxr,maxl));
        return res;
    }
    int findMin(Node *root)
    {
        if(root==NULL){
            return INT_MAX;
            
        }
        
        int minl=findMin(root->left);
        int minr=findMin(root->right);
        int res=min(root->data,min(minr,minl));
         return res;
    }
};
