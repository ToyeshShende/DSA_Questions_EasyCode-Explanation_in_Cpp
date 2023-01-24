QUestion link:
https://leetcode.com/problems/reverse-integer/submissions/884600390/

class Solution {
public:
    int reverse(int x) {
        //steps
        //123 %10=3 ,123/10=12.(0+3) 12%10=2,12/10=1.(3*10+2) 
        //  1%10=1,1/10=0  (32*10+1)
        //means first mod then divde and then multi by 10 + remainder
        long int ans=0;
        while(x!=0){
            int rem=x%10;
            
            ans=ans*10+rem;
            x=x/10;
        }
        if(ans>INT_MAX || ans<INT_MIN){     //stick to the given range  carefully look ans initialization its long int
                                             // which is taken according to questions if write onl;y int it will not give correct when you submit
            return 0;
        }
        else 
            return ans;

    }
};
