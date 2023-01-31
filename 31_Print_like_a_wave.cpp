https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=0


How to solve 2d printing pattern questions
step 1  write all variable staring of col and row and end of col and row then 
step 2  inside for loop write push logic and take count and increment it at every push back and always check count is less than or equal to total
step 3   for push_back elements  first search the variable which is constant through out the pattern and one which is changing write changing one inside the for loop index
step 4  write for loop for only new pattern not for repeating pattern

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    int total=(nRows*mCols)-1;
    int srow=0;
    int erow=nRows-1;
    int scol=0;
    int ecol=mCols-1;
    int count=0;
    vector<int>ans;
    while(total>=count){
        //first col from staring
        for(int i=srow;total>=count && i<=erow;i++){
            ans.push_back(arr[i][scol]);
            count++;
        }
        scol++;
        //next col from ending 
        for(int i=erow;total>=count && i>=srow;i--){
            ans.push_back(arr[i][scol]);
            count++;
        }
        scol++;

        //repeat process till end
    }
    return ans;

}
