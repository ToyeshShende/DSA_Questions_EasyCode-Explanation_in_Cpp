


#include <bits/stdc++.h> 
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	set<int>s(arr1.begin(),arr1.end());              //we know set doent allow duplicate element so if we insert two array inside a set it will give us a union
	for(int i=0;i<arr2.size();i++){
		s.insert(arr2[i]);
	}
	vector<int>v(s.begin(),s.end());
	return v;


	
}
optimum approach
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0;
        int j=0;
        vector<int>v;
        
        while(i<n && j<m){
            if(i>0 && arr1[i]==arr1[i-1]){
                i++;
                continue;
            }
            if(j>0 && arr2[j]==arr2[j-1]){
                j++;
                continue;
            }
            if(arr1[i]<arr2[j]){
                v.push_back(arr1[i++]);
            }
            else if(arr1[i]>arr2[j]){
                v.push_back(arr2[j++]);
            }
            else{
                //equal
                v.push_back(arr1[i++]);
                j++;
            }
        }
        while(i<n){
             if(i>0 && arr1[i]==arr1[i-1]){
                i++;
                continue;
            }
            if(i<n){
            v.push_back(arr1[i++]);}
        }
        while(j<m){
            if(j>0 && arr2[j]==arr2[j-1]){
                j++;
                continue;
            }
            if(j<m){
            v.push_back(arr2[j++]);}
        }
        return v;
    }



//similar question :https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
//in this question we have to only print size so by doing set.size() we will directly get answer.
