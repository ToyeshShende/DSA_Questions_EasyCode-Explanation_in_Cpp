Question link : https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

    vector<int>ans;
	int i=n-1;
	int j=m-1;
	int carry=0;
	//start from back and add elements
	while(i>=0 && j>=0){
		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	//case 1 if first vectors elements are remain
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}
	//case 2 if second vector elements are remain
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}

	//if carry remain greater than 0
    while (carry != 0) {
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		
        }
		//as we have started sum of elements of last element first and added at front position just reverse the vector for correct answer.
    reverse(ans.begin(),ans.end());
		return ans;
}
