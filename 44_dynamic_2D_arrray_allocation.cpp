 
#include <iostream>

using namespace std;

int main()
{
    int row,coloumn;
    cin>>row;
    cin>>coloumn;
    int **arr=new int*[row];  //first single array with row count pointer 
    for(int i=0;i<row;i++){
        arr[i]=new int[coloumn];  // create a dynamic array for every row
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<row;i++){ 
        delete []arr[i];  // delete all row arrays
    }
    delete []arr;  //delete main array where all arrays are created
    

    return 0;
}
