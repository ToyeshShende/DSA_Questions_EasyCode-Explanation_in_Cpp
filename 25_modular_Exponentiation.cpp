

https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7&leftPanelTab=3


#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    int result=1;
	while(n>0){
		if(n&1){  // n&1 gives odd numbers for even its value is 0.
			//for odd numbers
			result=(1LL *result *(x)%m)%m;  //1LL is used to handle big numbers 
		}
		//for both even and odd
		x=(1LL *(x) %m *(x) %m)%m;
		n=n>>1;  // divide n by 2
	}
	return result
	// Write your code here.
}
