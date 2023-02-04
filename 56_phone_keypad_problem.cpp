https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/891486588/

class Solution {

private:
   void solve(string digits,string arr[],vector<string>&final,int index,string out){
       //base case
       if(index==digits.size()){
            final.push_back(out); 
            return;  
       }
       int num=digits[index]-'0';  // get the 0-9 number by substracing ascii values
       string temp=arr[num];
       for(int i=0;i<temp.size();i++){
           out.push_back(temp[i]);
           solve(digits,arr,final,index+1,out); // to put operations on next number inside of string
           out.pop_back(); //backtarcking(we are going back so string should be empty at root position) 
       }

   }

public:
    vector<string> letterCombinations(string digits) {
        int index=0;
        string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>final;
        if(digits.length()==0){
            return final;
        }
        string out="";
        solve(digits,arr,final,index,out);
        return final;
    }
};
