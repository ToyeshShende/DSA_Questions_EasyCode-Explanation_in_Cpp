

https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=1


#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string ans="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			ans+="@40";
		}
		else{
			ans+=str[i];
		}
	}

	return ans;
}
