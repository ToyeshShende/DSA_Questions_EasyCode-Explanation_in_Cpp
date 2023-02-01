https://leetcode.com/problems/permutation-in-string/description/

//sliding window technique.


class Solution {
private:
    bool check(int char1[26],int char2[26]){
        for(int i=0;i<26;i++){
            if(char1[i]!=char2[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        int char1[26]={0};
        //count of s1
        for(int i=0;i<n1;i++){
            int index=s1[i]-'a';
            char1[index]++;
        }
        int j=0;
        //count of s2 first two index
        int char2[26]={0};
        while(j<n1 && j<n2){
            int index=s2[j]-'a';
            char2[index]++;
            j++;
        }
        if(check(char1,char2)){
            return 1;
        }
        //add new one in window and remove last one from window
        while(j<n2){
            int index=s2[j]-'a';
            char2[index]++;
            
            int old=s2[j-n1]-'a';
            char2[old]--;
            j++;
            if(check(char1,char2)){
                return 1;
            }
        }
        return 0;


    }
};
