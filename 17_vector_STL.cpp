Stl means standard library functions.
  
  TO use just include library
  #include <bits/stdc++.h>





Example code------->
#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    vector<int>v; //vector initialization
    int arr[3]={2,3,4};
    for(int i=0;i<3;i++){
        v.push_back(arr[i]);  //insert into vector
    }
    int size=v.size();  //return current size
    cout << "\nat : g1.at(1) = " << v.at(1);  // print element of index 1
 
    cout << "\nfront() : g1.front() = " << v.front();
 
    cout << "\nback() : g1.back() = " << v.back();
    v.pop_back();  // remove element from pop_back
     v.insert(v.begin(), 5); //insert elemnent at a specific position
      v.erase(v.begin()); // remove elemnent at a specific position
      
      auto it=minmax_element(v.begin(),v.end());
      cout<<endl;
      cout<<*it.first;  //minimum elemnent
      
      cout<<endl;
      cout<<*it.second; // maximum elemnent
    
    
}
