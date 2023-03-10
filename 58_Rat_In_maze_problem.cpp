  https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1


public:
    bool isallow(int x,int y,vector<vector<int>>visited,int n,vector<vector<int>>m){
        if(x<n && y<n && x>=0 && y>=0 &&  m[x][y]==1 && visited[x][y]==0){
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> m, int n, vector<string>&final,string out,vector<vector<int>>visited,int x,int y){
        //base case
        if(x==n-1 && y==n-1){
            //reach destination
            final.push_back(out);
            return ;
        }
        visited[x][y]=1;
        
        //down 
        int newx=x+1;  // when going down co-ordinates =(x+1,y)
        int newy=y;
        if(isallow(newx,newy,visited,n,m)){
            out.push_back('D');
            solve(m,n,final,out,visited,newx,newy);
            out.pop_back(); //backtracking
        }
        //right
         newx=x;  // when going down co-ordinates =(x,y+1)
         newy=y+1;
        if(isallow(newx,newy,visited,n,m)){
            out.push_back('R');
            solve(m,n,final,out,visited,newx,newy);
            out.pop_back(); //backtracking
        }
        //left 
         newx=x;  // when going down co-ordinates =(x,y-1)
         newy=y-1;
        if(isallow(newx,newy,visited,n,m)){
            out.push_back('L');
            solve(m,n,final,out,visited,newx,newy);
            out.pop_back(); //backtracking
        }
        //UP
         newx=x-1;  // when going down co-ordinates =(x-1,y)
         newy=y;
        if(isallow(newx,newy,visited,n,m)){
            out.push_back('U');
            solve(m,n,final,out,visited,newx,newy);
            out.pop_back(); //backtracking
        }
        visited[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<int>>visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        int x=0;
        int y=0;
        vector<string>final;
        if(m[0][0]==0){
            return final;
        }
        string out="";
        
        
        solve(m,n,final,out,visited,x,y);
        sort(final.begin(),final.end());
        return final;
    }




// more simplyfied code




void solve(vector<string>&ans,vector<vector<int>>m,int n,int x,int y ,vector<vector<int>>visited,string out){
        
        if(x<0 || x>n-1 ||y<0 || y>n-1 || m[x][y]==0 || visited[x][y]==1){
            return ;
        }
        
        if(x==n-1 && y==n-1){
            ans.push_back(out);
            return;
        }
        visited[x][y]=1;
        solve(ans,m,n,x+1,y,visited,out+'D');  //down
        solve(ans,m,n,x,y-1,visited,out+'L');  //left
        solve(ans,m,n,x,y+1,visited,out+'R');  //right
        solve(ans,m,n,x-1,y,visited,out+'U');  //up
        visited[x][y]=0;  //back tracking
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
         vector<vector<int>>visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string out="";
        solve(ans,m,n,0,0,visited,out);
        sort(ans.begin(),ans.end());
        return ans;
    }
