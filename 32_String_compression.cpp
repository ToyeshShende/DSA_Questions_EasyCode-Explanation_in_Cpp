 https://leetcode.com/problems/string-compression/description/



class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ind=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            int count=1;
            while(j<n && chars[i]==chars[j]){
                j++;
                count++;
            }
            chars[ind++]=chars[i];

            if(count>1){
                //convert int to char
                string cnt=to_string(count);
                for(auto i:cnt){
                    chars[ind++]=i;
                }
            }
            i=j;
        }
        return ind;
        
    }
};
