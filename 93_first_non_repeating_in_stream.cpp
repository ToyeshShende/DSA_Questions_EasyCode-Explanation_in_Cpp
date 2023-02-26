https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1



string FirstNonRepeating(string A){
		    string ans;
		    queue<char>q;
		    unordered_map<char,int>mp;
		    for(int i=0;i<A.length();i++){
		        mp[A[i]]++;
		        
		        q.push(A[i]);
		        while(!q.empty()){
    		        if(mp[q.front()]>1){
    		            q.pop();  // repeating will be poped out
    		        }
    		        else{
    		            ans.push_back(q.front()); //if non reapeating found
    		            break;
    		        }
		        }
		        if(q.empty()){  //all were repeating in queue
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}
