
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];      //bad practice
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int *arr1 =new int[n]; //good practice (dynamic allocation)
    int *i= new int;
//    8 byte   4 byte
     for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}
