//Questions link:
//https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1


#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	int i=0;
	int j=0;
        while (i < n && j < m) {
          if (arr1[i] == arr2[j]) {
			  ans.push_back(arr1[i]);
			  i++;                                    //both array are sorted ex arr1={2,3} arr2={4,5};  if we check first element of both array so arr1[i]<arr2[j] ie we need to increment the i to match the with arr2 element same for reverse .
			  j++;
			  
          } else if (arr1[i] > arr2[j]) {
			  j++;
          } else {
			  i++;
          }
        }
		return ans;
}
