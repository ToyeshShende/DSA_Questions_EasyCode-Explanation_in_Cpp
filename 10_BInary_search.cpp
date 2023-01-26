https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1


class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low=0;
        int high=n-1;
      
        while(low<=high){
              int mid=(low+high)/2;             // mid element formula example array 2,3,6,7  if high and low are last and first elements then there mid will be 1 i.e 3
                                               // so  if we  want to search 6  and 3 is smaller than 3 so we need bigger value so we move low value at mid+1 position and then again calculate the mid and again checkit.
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
            
        }
        return -1;
    }
};

// BInary seach has better time complexity than linear one as we only need to check onluy half elements
// linear has O(n) and binary has O(n/2) time complexity.
