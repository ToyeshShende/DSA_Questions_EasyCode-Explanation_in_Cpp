

https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>mp;   //mapping
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        char c;
        int j=0;
        for(auto i:mp){
            if(j<i.second){   //i.second gives count of character
                j=i.second;
                c=i.first;   //i.first gives character.
            }
        }
        return c;
    }

};
