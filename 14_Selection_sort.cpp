https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0


#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n;i++){
        int miniid=i;
        for(int j=i+1;j<n;j++){
            if(arr[miniid]>arr[j]){
                miniid=j;
            }
        }
        swap(arr[i],arr[miniid]);
    }
    
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[minidx]>arr[j]){
                minidx=j;
            }
        }
        swap(arr[minidx],arr[i]);
    }
}
void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void insertion(int arr[],int n){
    //1 7 10 4 8 2 
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        for(j=i-1;j>=0;j--){
            if(arr[j]>curr){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=curr;
    }
}
void merge(int arr[],int n,int low,int high,int mid){
    int a=mid-low+1;
    int b=high-mid;
    int *arr1=new int[a];
     int *arr2=new int[b];
     int indx=low;
     for(int i=0;i<a;i++){
         arr1[i]=arr[indx++];
         
     }
     for(int i=0;i<b;i++){
         arr2[i]=arr[indx++];
         
     }
     int i=0;
     int j=0;
     int m=low;
     while(i<a && j<b){
         if(arr1[i]>arr2[j]){
             arr[m++]=arr2[j++];
         }
         else{
             arr[m++]=arr1[i++];
         }
     }
     while(i<a){
          arr[m++]=arr1[i++];
     }
     while(j<b){
         arr[m++]=arr2[j++];
     }
     
     
}

void mergesort(int arr[],int n,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,n,low,mid);
    mergesort(arr,n,mid+1,high);
    merge(arr,n,low,high, mid);
    
}
int partision(int arr[],int n,int low,int high){
    if(low==high){
        return low;
    }
    int p=arr[low];
    int j=low;
    for(int i=low+1;i<=high;i++){
        if(arr[i]<=p){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int n,int low,int high){
    if(low>=high){
        return ;
    }
    int mid=partision(arr,n,low,high);
    quicksort(arr,n,low,mid-1);
    quicksort(arr,n,mid+1,high);
}
int main()
{
    int arr[5]={2,4,1,5,3};
    
    // selection(arr,5);
    // bubble(arr,5);
    // insertion(arr,5);
    // mergesort(arr,5,0,4);
    quicksort(arr,5,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


Selection sort ------------------O(n2).
arr[] = 64 25 12 22 11.

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64
