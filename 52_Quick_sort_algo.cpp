https://practice.geeksforgeeks.org/problems/quick-sort/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


public:
    
    // 4 1 3 9 7 
   // take pivot first element (which is 4) move all elements which are less than 4 to the left of 4 and greater than 4 elements at right side of 4 
    //  3 1 4 9 7   
    // again follow same thing
    void quickSort(int arr[], int low, int high)
    {   if(low<high){
        int mid=partition(arr,low,high);
        quickSort(arr,low,mid-1);   // for sorting left side element
        quickSort(arr,mid+1,high);  // for sorting right side element
        return;}
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       if(low==high){
           return low;
       }
       int p=arr[low];  // take first array element as a pivot
       int j=low;
       for(int i=low+1;i<=high;i++){
           if(arr[i]<=p){
               j++;
               swap(arr[i],arr[j]);  // swap smaller element at front 
           }
       }
       swap(arr[j],arr[low]);   // swap pivot to middle of its element which are smaller than him and greater than him
       return j;
       
    }
