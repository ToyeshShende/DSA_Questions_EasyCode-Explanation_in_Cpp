https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=3


int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    map<int,int>mp;          // map define
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;          // elemets of array add like   array element--> countof it
    }
    for (auto i : mp) {
      if (mp.second > 1) {              //mp.second means we are accesing elements count
          return mp.second;
      }
    }
}
