https://practice.geeksforgeeks.org/problems/merge-sort/1
    



// 10 9 8 7 6 5 4 3 2 1   so take mid i.e. 6  push left side element in an array same for right side element
    // arr1=10 9 8 7 6   arr2=5 4 3 2 1
    // again put operations on arr1  and arr2 
    // 10 9 8  & 7 6          5 4 3 & 2 1
    // 8 9 10 & 6 7          3 4 5 & 1 2
    //take while loop check arr1[i] and arr2[j] take minimum one first in main array
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int n1=m-l+1;
         int n2=r-m;
         int *arr1=new int[n1];
         int *arr2=new int[n2];
         int mainsize=l;
         for(int i=0;i<n1;i++){  //first array 
             arr1[i]=arr[mainsize++];
         }
         mainsize=m+1;
         for(int j=0;j<n2;j++){   //second array
             arr2[j]=arr[mainsize++];
         }
         //merge;
         int i=0;
         int j=0;
         int mains=l;
         while(i<n1 && j<n2){
             if(arr1[i]<arr2[j]){
                 arr[mains++]=arr1[i++];
             }
             else{
                 arr[mains++]=arr2[j++];
             }
         }
         while(i<n1){   // to change remaining elements from arr1 if any
             arr[mains++]=arr1[i++]; 
         }
         while(j<n2){     // to change remaining elements from arr2 if any
             arr[mains++]=arr2[j++];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return ;
        }
        
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);  //for sorting left part
        mergeSort(arr,mid+1,r);  //for sorting right part
        
        merge(arr,l,mid,r); //merge both array
    }
