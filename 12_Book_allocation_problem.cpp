Question link
https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

#include <bits/stdc++.h>
bool ispossible(int n, int m, vector<int> time ,long long mid) {
	//check all cases 0-100->50 check for 50 if items are reaminng not completed in  given days then take l=mid+1 because 50 nahi bana parahtho phele wale kaise banayege   then  if possible hai to h=mid-1 lelo 
	long long pagecount=0;
	int numday=1;
	// 10 20 30 40 50    mid first taken is 50 check adition of pagecount and array element should not exceed mid if exceed then increment the numday 
        for (int i = 0; i < m; i++) {
          if (pagecount + time[i] <= mid) {
			  pagecount+=time[i];
          } else {
			  
			  numday++;
			  if(numday>n || time[i]>mid){
				  return false;
			  }
			  pagecount=time[i];

          }
        }
		return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	
	//10 20 30 40 50 
	//we want to allocate pages so we want minimize the max time
	//for allocation use binary search 
    //first find mid 

	long long s=0; //start
	long long sum=0;
    for (int i = 0; i < m; i++) {
			sum+=time[i];
        }
	long long e=sum;//end
    while (s <= e) {
		long long mid=(s+e)/2;
                if (ispossible(n, m, time,mid)) {
					sum=mid;
					e=mid-1;      //mid is satiesfied here so after that satiesfied values all mid can satiesfy so as we want minimum so take end at the mid-1 position,
                } else {

					s=mid+1; //mid is not satiesfied so before mid numbers also can't satiesfy the condition so we need to take start at mid+1 position
                }
        }
		return sum;
}
