

Sieve of Eratosthenes



https://leetcode.com/problems/count-primes/solutions/


class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n+1,true);
        int count=0;
        v[0]=v[1]=false;
        for(int i=2;i<n;i++){
            if(v[i]){
                count++;
            }
            for(int j=2*i;j<n;j=j+i){    //table of 2 3 5 7 etc.
                v[j]=0;
            }
        }
        return count;
    }
};


Time complexity :   O(n *log(logn))
