#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>s;
    s.push(34); // push at top
    cout<<s.empty();
    s.pop();  //delete top most element
    cout<<s.empty();

    return 0;
}

int celebrity(vector<vector<int> >& M, int N) 
    {
        stack<int>s;
        for(int i=0;i<M.size();i++){
            s.push(i);
        }
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(M[a][b]==1){
                //a knows b  bpush
                s.push(b);
            }
            else{
                s.push(a);
            }
            
        }
        //got potential
        //check all row element 0
    //check all coloum element 1 except itself 0
       bool rowcheck=true;
        int candidate=s.top();
        for(int i=0;i<N;i++){
            if(M[candidate][i]!=0){
                rowcheck=false;
                break;
            }
        }
        bool colcheck=true;
        for(int i=0;i<N;i++){
            if(candidate==i ){
                if(M[i][candidate]==0){
                    continue;
                }
                else{
                    colcheck=false;
                    break;
                }
            }
            else{
                if(M[i][candidate]!=1){
                    colcheck=false;
                    break;
                }
            }
        }
        if(colcheck==true && rowcheck==true){
            return candidate;
        }
        return -1;
    }
