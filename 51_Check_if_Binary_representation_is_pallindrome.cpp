https://www.codingninjas.com/codestudio/problems/check-palindrome_920555?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13  


#include <bits/stdc++.h> 
using namespace std;
string converttostr(long long n) {
	string ans="";
	while(n>0){
		char rem=n%2;
		n=n/2;
        ans+=rem;
        
	}
	return ans;

}
bool solve(string &s, int l, int h) {
  if (l > h) {
	  return true;
  }
  if(s[l]!=s[h]){
	  return false;
  }
  l++;
  h--;
  solve(s,l,h);
}
bool checkPalindrome(long long N)
{
	// Write your code here.
	int l=0;
	string s=converttostr(N);
	int h=s.size()-1;
	bool j=solve(s,l,h);
	return j;
}
