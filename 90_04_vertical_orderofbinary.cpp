https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    
    
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        map<int,map<int,vector<int>>> mp;
   
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> front = q.front();
            q.pop();
            TreeNode* node = front.first;
            int horizontal_distance = front.second.first;
            int vertical_distance = front.second.second;
            mp[horizontal_distance][vertical_distance].push_back(node->val);
            if(node->left){
                q.push({node->left,{horizontal_distance-1,vertical_distance+1}});
            }
            if(node->right){
                q.push({node->right,{horizontal_distance+1,vertical_distance+1}});
            }
        }
    
        for(auto &it: mp){
            vector<int>curr;
            for(auto &i: it.second){
                sort(i.second.begin(),i.second.end());
                for(int j=0;j<i.second.size();j++){
                    curr.push_back(i.second[j]);
                }
            }
            ans.push_back(curr);
              
        }
        
        return ans;
    }
};

vector<int> verticalOrder(Node *root)

    {
    //Function to find the vertical order traversal of Binary Tree.
        queue<pair<Node*,int>>q;
         // node and level
        map<int,vector<int>>m;
        //horizontal dis  and vector of elements

        vector<int>ans;

        q.push({root,0});

        while(!q.empty()){

            Node* t=q.front().first;

            int val=q.front().second;

            q.pop();

            m[val].push_back(t->data);

            if(t->left)q.push({t->left,val-1});

            if(t->right)q.push({t->right,val+1});

            

        }

        for(auto x:m){
            for(int y:x.second)
                ans.push_back(y);
        
    }

        return ans;

    }
