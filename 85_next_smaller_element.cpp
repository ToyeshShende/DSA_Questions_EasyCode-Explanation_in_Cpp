https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio



#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{   //start iterating from back of arr
    vector<int>v;
    stack<int>s;
    s.push(-1);  // ans for last element will always be -1
    for(int i=n-1;i>=0;i--){

      while(s.top()>=arr[i]){
          s.pop();
      }
      //minimum than arr[i] on top
        v.push_back(s.top());
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
