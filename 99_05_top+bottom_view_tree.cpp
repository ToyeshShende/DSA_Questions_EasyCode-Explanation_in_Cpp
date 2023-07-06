https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1


vector<int> topView(Node *root)
    {
        vector<int>v;
        map<int,int>mp;  //(,horizontal distance,root->data)
        queue<pair<Node*,int>>q;  //node ,distache
        q.push({root,0});
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            Node *curr=temp.first;
            int hdis=temp.second;
            q.pop();
            if(mp.find(hdis)==mp.end()){
                mp[hdis]=curr->data;
            }
            if(curr->left){
                q.push({curr->left,hdis-1});
            }
            if(curr->right){
                q.push({curr->right,hdis+1});
            }
        }
        for(auto i:mp){
            v.push_back(i.second);
        }
        return v;
    }

//all same just keep adding element in map dont check 

vector <int> bottomView(Node *root) {
        // Your Code Here
        
      
        vector<int>v;
        map<int,int>mp;  //(,horizontal distance,root->data)
        queue<pair<Node*,int>>q;  //node ,distache
        q.push({root,0});
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            Node *curr=temp.first;
            int hdis=temp.second;
            q.pop();
           
                mp[hdis]=curr->data;
            
            if(curr->left){
                q.push({curr->left,hdis-1});
            }
            if(curr->right){
                q.push({curr->right,hdis+1});
            }
        }
        for(auto i:mp){
            v.push_back(i.second);
        }
        return v;
    
    
    }
    
