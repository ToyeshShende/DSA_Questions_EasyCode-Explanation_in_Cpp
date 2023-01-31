

https://leetcode.com/problems/reverse-words-in-a-string/description/


class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');   // helps in adding last word of line
        string s1="";
        int i=0;
        vector<string>v;      // store the whole world
        while(s[i]!='\0'){
            if(s[i]==' '){
                
                if(s1.length()>0){    // helps in removing extra spaces from front end or even from middle.
                    v.push_back(s1);   // store whole string before space
                    s1="";
            }
            }
            else{
                s1.push_back(s[i]);
            }
            i++;
        }
        reverse(v.begin(),v.end());       //reverse all stored words add in any string after every word add space and then  return string. 
        for(auto i:v){
            s1+=i;
            s1+=' ';
        }
         s1.pop_back();   // as we have add space after every word but for last word we don't need a space so remove it

        return s1;
    }
    
};





another method   

class Solution {
public:
    string reverseWords(string s) {
        s.insert(s.begin(),' ');
        string s1="";
        int n=s.length();
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                reverse(s1.begin(),s1.end());
                if(s1.length()>0){
                    ans+=s1;
                    ans+=' ';
                    s1="";
                    }
                
            }
            else{
                s1+=s[i];
            }
        }
        ans.pop_back();
        return ans;
    }
};

