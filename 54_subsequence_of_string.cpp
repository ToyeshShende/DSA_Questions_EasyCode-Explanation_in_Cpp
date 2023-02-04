https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16


#include <bits/stdc++.h> 
using namespace std;
void solve(vector<string>&ans,string str,int index,string out){
	if(index>str.size()-1){
		if(out.length()>0){   // here we don't want a empty string so add condition
			ans.push_back(out);
		}
		
		return ;		
	}
	// exclude
	solve(ans,str,index+1,out);
	//include
	char ele=str[index];
	out.push_back(ele);
	solve(ans,str,index+1,out);
	
}
vector<string> subsequences(string str){

	vector<string>ans;
	int index=0;
	string out="";
	solve(ans,str,index,out);
	return ans;
	
}
