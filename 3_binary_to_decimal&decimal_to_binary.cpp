
#include <bits/stdc++.h>

using namespace std;
void decimal_to_binary(int n){
    int res[32];
    int i=0;
    while(n>0){
        res[i]=n%2;  // if n is 9 divide 9 by 2 and store in an array
                     // continue this until n is greater than 0 
        n=n/2;         
        i++;
        
    }
    for(int j=i-1;j>=0;j--){
        cout<<res[j];       // print the array in reverse order for correct ans
        //Example: n=7---> 7/2=3 and remainder=1 array=1
             //           3/2=1 and remainder=1  array=11
             //           1/2=0 and remainder=1 array=111
    }       //             other all elements are 0 upto 32 after reversing
            //             array we get 0111 as a answer
    
}
int binary_to_decimal(long long n){
    int i = 0;
    int decimal=0;  // remainder(rem)
    while(n!=0){
        int rem=n%10;   //n=0111  divide by 10 to get remainder
        n/=10;
        decimal+=rem*pow(2,i);
        i++;
    }
    
    
    //Example: so 0111 check is from end 2^0 has 1,2^1 has 1 ,2^2 has 1 and 2^3 has 0
    //  means if we do multiplication of given 0111's remainder with two power to get soln.
    return decimal;
}

int main()
{
    int n;
    n=7;
    long long binary=111;
    decimal_to_binary(n);
    cout<<endl;
    
    cout<<binary_to_decimal(binary);

    return 0;
}
