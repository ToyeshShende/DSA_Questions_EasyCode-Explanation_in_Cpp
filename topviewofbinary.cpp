
https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1


public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>v;
        
        if(root==NULL){
            return v;
        }
        map<int,int>mp;
         //horizontal dis and node data
         queue<pair<Node * ,int> >q;
         //node and  horizontal dis
         q.push(make_pair(root,0));
         
         while(!q.empty()){
             auto temp=q.front();   //do operation on front pair
             q.pop();
             Node *frontnode=temp.first;
             int hord=temp.second;
             
             
             if(mp.find(hord) == mp.end()){   //put nodes data in map only 1 element shoould be put so always check before inserting in map if already element is there or not
                 mp[hord]=frontnode->data;
             }
             if(frontnode->left){  //for left siode
                 q.push(make_pair(frontnode->left,hord-1));
                 
             }
             if(frontnode->right){ // for right side 
                 q.push(make_pair(frontnode->right,hord+1));
             }
             

             
         }
         
         for(auto i:mp){
             v.push_back(i.second);
         }
         return v;
    }
