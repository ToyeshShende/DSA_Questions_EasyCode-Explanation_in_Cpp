![image](https://github.com/ToyeshShende/DSA_Questions_EasyCode-Explanation_in_Cpp/assets/119116915/d7de4497-4e40-48b9-b18f-52c724b6dfde)
class Solution{
  public:
  pair<int,int>solve(Node *root){
      if(root==NULL){
           pair<int ,int>ans=make_pair(0,0);
           return ans;
      }
      pair<int,int>left=solve(root->left);
      pair<int,int>right=solve(root->right);
      
      pair<int,int>res;
      //twocase  1: include root and skip its left and right
      //2.take max of left side of root ,root's left one or adjacent also same for right
      res.first=root->data+left.second+right.second;
      res.second=max(left.first,left.second)+max(right.first,right.second);
      return res;
      
  }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        pair<int,int>p=solve(root);
        return max(p.first,p.second); //root has two values store
    }
};
