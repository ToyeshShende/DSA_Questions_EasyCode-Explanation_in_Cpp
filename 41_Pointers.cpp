 

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{   //pointer initialization
    
    int num=5;
    cout<<num;
    cout<<endl;
    int *ptr=&num;   //pointer initialization
    cout<<ptr<<endl;   //print address    
    cout<<*ptr<<endl;  //print num val;
                        
    cout<<endl;
    cout<<sizeof(num)<<endl;  // its an integer it will print 4 (4byte)
    cout<<sizeof(ptr)<<endl;  // // always return 8byte as its an address 
    cout<<sizeof(*ptr)<<endl;  // return num's byte value.
    
    int num1=5;
    int a=num1;  // a copy of num1 is created here.
    cout<<"Before "<<num1<<endl;
    a++;
    cout<<"after "<<num1<<endl;
    int *p=&num1;     // doesnot create copy of num1 here
    cout<<"Before "<<num1<<endl;
    (*p)++;
    cout<<"after "<<num1<<endl;
    
    //coping a pointer 
    int *q=p;     //  here  which are the operations will be done on q will also automatically applied on *p
    cout<<*p<<"--"<<*q<<endl;
    cout<<p<<"--"<<q<<endl;
    *q=*q+1;  //addition
    cout<<*q<<endl;
    cout<<*p<<endl;
    int arr[3]={1,2,3};
    int i=0;
    while(i<3){
     
          //as arr[i]=*(arr+i)     and  i[arr]=*(i+arr)
     cout<<i[arr]<<endl; //it will print normal 1 2 3 arr elements according to i  
        i++;
    }
    
    return 0;
}
