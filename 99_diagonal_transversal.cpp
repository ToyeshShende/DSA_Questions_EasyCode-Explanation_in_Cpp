
https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

vector<int> diagonal(Node *root)
{
   // your code here
     queue<Node*> q;

   vector<int> ans;

   if(root == NULL){

       return ans;

   }

   q.push(root);

   while(!q.empty()){   // moves to left one by one

       Node* temp = q.front();

       q.pop();
 
       while(temp){  //print all right side elements to the the root
 
           if(temp->left){

               q.push(temp->left);

           }

           ans.push_back(temp->data);

           temp = temp->right;

       }

   }

   return ans;
