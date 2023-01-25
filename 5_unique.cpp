int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for (int i = 0; i < size; i++) {
        ans=ans^arr[i]; // same elements xor gives 0 so correct one's ans
                          // with 0 gives the same number we will get ans.
    }
    return ans;
}

