
Question link
https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

for logic check previous book allocation problem

bool ispossible(vector<int> arr, int k, int mid) {
    int colorportion=0;
    int day=1;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] + colorportion <= mid) {
          colorportion+=arr[i];
      } else {
          day++;
          if (day > k || arr[i] > mid) {
              return false;
          }
          colorportion=arr[i];
      }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{   
    int s=0;
    int sum=0;
    //    Write your code here.
    for (int i = 0; i < boards.size(); i++) {
        sum+=boards[i];
    
    }
    int e=sum;
    while (s <= e) {
        int mid=(s+e)/2;
        if (ispossible(boards, k, mid)) {
            sum=mid;
            e=mid-1;
        } else {
            s=mid+1;
        }
    }
    return sum;
}


agressive cow

#include <bits/stdc++.h>
bool possible(int mid, vector<int> &stalls, int k) {
    int lastposi=stalls[0];
    int count=1;
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastposi>=mid){
            count++;
            if(count==k){
                return true;
            }
            lastposi=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{   sort(stalls.begin(),stalls.end());
    int low=0;
    int high=-1;
    for (int i = 0; i < stalls.size(); i++) {
        high=max(high,stalls[i]);
    }
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(mid,stalls,k)){
            low=mid+1;
             ans=mid;
            

        }
        else{
            high=mid-1;
        }

    }
    return ans;
}
