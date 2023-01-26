https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include <bits/stdc++.h>
int firstocc(vector<int> &arr, int n, int k) {
    int l=0;
    int h=n-1;
    int ans=-1;
    while (l <= h) {
        int mid=(l+h)/2;
        if (arr[mid] == k) {
            ans=mid;
            h=mid-1;                   //instead of return just we want first occurence so we move towards front side as much as we can and return in the end.

        } else if (arr[mid] > k) {
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return ans;
}
int lastocc(vector<int> &arr, int n, int k) {
    int l=0;
    int h=n-1;
    int ans=-1;
    while (l <= h) {
        int mid=(l+h)/2;
        if (arr[mid] == k) {
            ans=mid;
            l=mid+1;             // want last occurence so we move towards end 

        } else if (arr[mid] > k) {
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first=firstocc(arr,n,k);
    p.second=lastocc(arr, n,k);
    return p;
}
