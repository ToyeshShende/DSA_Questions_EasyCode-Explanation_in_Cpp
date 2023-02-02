
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// inline is used only if funtion is of only one line and if write inline so it automatically replace the function line where it is called
inline int check(int &a,int &b){  // using &a avoid creating copy of a and b
     return (a>b)? a:b;  //print a if condition is true if flase then print b;
}
int main()
{
    int a=4;
    int b=3;
    int maxi=check(a,b);
    cout<<maxi;

    return 0;
}
