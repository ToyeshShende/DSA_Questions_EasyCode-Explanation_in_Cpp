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
