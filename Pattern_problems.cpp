
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*for print ****
                ****
                ****
                ****         */
    //aproach take i,j as row and coloum and run till last star
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;   //dont forget to add space after a coloum end.
    }
    cout<<endl;
 //---------------------------------------------------------------------------------------------------------------------   
    //for print     1 1 1 1
                //  2 2 2
                //  3 3 
                //  4 
    
    // 4 row and decreasing coloum size by one 
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4+1-i;j++){    //here we are taking total_rows+1-i
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
 //---------------------------------------------------------------------------------------------------------------------   
   
   //for printing    6 5 4 3 2 1
                //   6 5 4 3 2 1
                //   6 5 4 3 2 1
                //   6 5 4 3 2 1
                //   6 5 4 3 2 1
                //   6 5 4 3 2 1
                
    //just use reverse for loop;
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
                
    return 0;
}
